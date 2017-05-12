#include "settings.h"
#include "QString"
#include "QFile"
#include "QDir"
#include "QJsonObject"
#include "QJsonParseError"
#include "QJsonDocument"
#include <utility>
#include "QMessageBox"
#include "QJsonArray"
#include <QStringListModel>
#include "QStandardPaths"

namespace Ps {
    static auto RESOURCE_PREFFIX = QStringLiteral(":/json");
    Settings::Settings(QObject *parent, QString fileName) :
        QObject(parent),
        m_fileName(fileName),
        m_modelCommands(*new QStringListModel(this))
    {

    }

    void Settings::SetupCommands(QJsonObject json_obj)
    {
        QJsonArray json_array = json_obj["commands"].toArray();
        QStringList cmdList;
        for(auto item:json_array)
        {
            cmdList.append(item.toString());
        }
        m_modelCommands.setStringList(cmdList);
    }

    void Settings::ParseJsonData()
    {
        QString raw_json = ReadJsonFile();
        if(raw_json.size() == 0) return;

        auto json_result = GetJsonObject(raw_json);
        auto json_error = json_result.second;
        if(json_error.error != QJsonParseError::NoError)
        {
            ShowJsonParseError(json_error);
        }
        auto json_object = json_result.first;
        m_applicationTitle = json_object["applicationTitle"].toString();
        m_appShortName = json_object["appShortName"].toString();
        m_hostName = json_object["hostname"].toString();
        m_portNumber = json_object["port"].toInt();
        m_longWaitMs = json_object["tcpLongWaitMs"].toInt();
        m_shortWaitMs = json_object["tcpShortWaitMs"].toInt();

        SetupCommands(json_object);
    }

    QString Settings::ReadJsonFile()
    {
        auto default_settings = ReadJsonFromInternalResource();
        QDir config_dir = OpenConfigurationDirectory();
        auto path = config_dir.filePath(m_fileName);
        QFile std_file(path);
        if(std_file.exists())
        {
            if(!std_file.open(QFile::ReadOnly | QFile::Text))
            {
                SendErrorMessage("Could not open " + path);
                return default_settings;
            }
            QString settings = std_file.readAll();
            std_file.close();
            return settings;
        }
        else
        {
            WriteDefaultsToStdConfigFile(std_file, default_settings);
            return default_settings;
        }
    }

    void Settings::WriteDefaultsToStdConfigFile(QFile& std_config_file, const QString& setting)
    {
        int length = setting.length();
        if(!std_config_file.open(QFile::WriteOnly|QFile::Text))
            SendErrorMessage("Could not open file " + std_config_file.fileName());

        auto bytes_written = std_config_file.write(qPrintable(setting), length);
        if(bytes_written != length)
        {
            SendErrorMessage("Could not write settings to " + std_config_file.fileName());
            if(!std_config_file.remove())
                SendErrorMessage("Could not remove configuration file. Please delete manually " + std_config_file.fileName());
        }
        std_config_file.close();
    }

    QDir Settings::OpenConfigurationDirectory()
    {
        QDir config_dir(QStandardPaths::writableLocation(QStandardPaths::ConfigLocation));
        if(!config_dir.exists())
        {
            QDir dir;
            dir.mkpath(config_dir.path());
        }
        return config_dir;

    }

    JsonObjErrPair Settings::GetJsonObject(const QString& rawJson)
    {
        QJsonParseError json_parse_error;
        QJsonDocument json_doc = QJsonDocument::fromJson(rawJson.toUtf8(), &json_parse_error);

        QJsonObject json_obj = json_doc.object();

        return std::make_pair(json_obj, json_parse_error);
    }

    QString Settings::ReadJsonFromInternalResource()
    {
        QDir res_dir(RESOURCE_PREFFIX);
        if(!res_dir.exists())
        {
            SendErrorMessage("Internal resource path missing " + res_dir.canonicalPath());
            return "";
        }
        auto path = res_dir.filePath(m_fileName);
        QFile res_file(path);
        if(!res_file.open(QFile::ReadOnly | QFile::Text))
        {
            SendErrorMessage("Could not open internal resource " + path);
            return "";
        }

        QString setting = res_file.readAll();
        return setting;
    }

    void Settings::SendErrorMessage(const QString& msg)
    {
        emit NotifyStatusMessage(msg);
    }

    void Settings::ShowJsonParseError(QJsonParseError parse_error)
    {
        QString msg = tr("Error parsing JSON settings file. \n");
        msg.append(parse_error.errorString());
        //msg.append(tr("The default values will be used.\n"));
        QMessageBox::critical(0, tr("VFP"), msg);
    }
}
