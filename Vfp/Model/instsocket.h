
#pragma once
#include <QObject>

class QTcpSocket;

namespace Ps {


    class InstSocket : public QObject
    {
            Q_OBJECT
        public:
            explicit InstSocket(QObject *parent=0);
            bool Connect();
            void Disconnect();
            bool IsOpen();

            QString GetHostname() const {return m_hostname; }
            void SetHostname(const QString& value) { m_hostname = value; }
            quint16 GetPort() const { return m_port; }
            void SetPort(quint16 value);
            void SetLongWaitMs(int value) { m_longWaitMs = value; }
            void SetShortWaitMs(int value) { m_shortWaitMs = value; }
            QString ReadData() const;
            void WriteData(const QString& data) const;

            ~InstSocket();
    signals:
           void NotifyConnected();
           void NotifyDisconnected();

        private slots:
            void onConnected();
            void onDisconnected();

        private:

            QTcpSocket& m_socket;
            QString m_hostname;
            quint16 m_port;
            int m_shortWaitMs;
            int m_longWaitMs;


            explicit InstSocket(const InstSocket& rhs) = delete;
            InstSocket& operator= (const InstSocket& rhs) = delete;
    };
}


