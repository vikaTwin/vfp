#include "instsocket.h"
#include <QTcpSocket>
#include "utils.h"

namespace Ps
{
    InstSocket::InstSocket(QObject *parent) :
        QObject(parent),
        m_socket(*new QTcpSocket(this)),
        m_hostname(""),
        m_port(0),
        m_shortWaitMs(0),
        m_longWaitMs(0)
    {
        connect(&m_socket, &QTcpSocket::connected, this, &InstSocket::onConnected);
        connect(&m_socket, &QTcpSocket::disconnected, this, &InstSocket::onDisconnected);
    }

    InstSocket::~InstSocket()
    {
        Utils::DestructorMsg(this);
    }

    void InstSocket::SetPort(quint16 value)
    {
        m_port = value;
    }

    bool InstSocket::Connect()
    {
        qDebug()<<"Attemting to connect to " << m_hostname << " on a port "
                        << m_port << "with wait of " << m_longWaitMs;
        m_socket.connectToHost(m_hostname, m_port, QTcpSocket::ReadWrite);
        return m_socket.waitForConnected(m_longWaitMs);
    }

    bool InstSocket::IsOpen()
    {
        return m_socket.isOpen();
    }

    void InstSocket::Disconnect()
    {
        if(!m_socket.isOpen()) return;
        m_socket.disconnectFromHost();
    }

    void InstSocket::onConnected()
    {
        emit NotifyConnected();
    }

    void InstSocket::onDisconnected()
    {
        emit NotifyDisconnected();
    }

    void InstSocket::WriteData(const QString &data) const
    {
        int bytes_written = m_socket.write(qPrintable(data));
        qDebug() << "Bytes written " << bytes_written;
    }

    QString InstSocket::ReadData() const
    {
        if(!m_socket.isReadable())
            return "Error! Socket is not redable!";

        QString result;
        while(!m_socket.atEnd())
        {
            result.append(m_socket.readAll());
            m_socket.waitForReadyRead(m_shortWaitMs);
        }
        return result;
    }
}
