
#pragma once
#include <QObject>

class QString;
class QStringListModel;
class QFile;
class QDir;
class QJsonObject;
class QJsonParseError;


namespace Ps {
    typedef std::pair<QJsonObject, QJsonParseError> JsonObjErrPair;
    class Settings : public QObject
    {
        Q_OBJECT
        public:
            explicit Settings(QObject* parent, QString fileName);

            void ParseJsonData();
            QString GetApplicationTitle() const { return m_applicationTitle; }
            QString GetAppShortName() const { return m_appShortName; }
            QString GetHostName() const { return m_hostName; }
            int GetPortNumber() const { return m_portNumber; }
            int GetLongWaitMs() const { return m_longWaitMs; }
            int GetShortWaitMs() const { return m_shortWaitMs; }
            QStringListModel& GetCommandsAsModel() const { return m_modelCommands; }

        signals:
           void NotifyStatusMessage(QString msg);

        private:

            QString m_fileName;
            QString m_applicationTitle;
            QString m_appShortName;
            QString m_hostName;
            quint16 m_portNumber;
            int m_longWaitMs;
            int m_shortWaitMs;
            QStringListModel& m_modelCommands;

            void SetupCommands(QJsonObject json_obj);
            QString ReadJsonFile();
            QString ReadJsonFromInternalResource();

            void SendErrorMessage(const QString &msg);
            JsonObjErrPair GetJsonObject(const QString &rawJson);
            void ShowJsonParseError(QJsonParseError parse_error);
            QDir OpenConfigurationDirectory();
            void WriteDefaultsToStdConfigFile(QFile &std_config_file, const QString &setting);

            explicit Settings(const Settings& rhs) = delete;
            Settings& operator= (const Settings& rhs) = delete;
    };
}


