/********************************************************************************
** Form generated from reading UI file 'setuptab.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPTAB_H
#define UI_SETUPTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupTab
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbTcpIp;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *loTcpIpGroup;
    QHBoxLayout *loConnect;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QVBoxLayout *loIpAddress;
    QLabel *lblIpAddress;
    QLineEdit *editIpAddress;
    QVBoxLayout *loPort;
    QLabel *lblPort;
    QLineEdit *editPort;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gbDirectCommands;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmdCommands;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSend;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnReceive;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *gbInstrumentMessages;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textInstrumentMessages;
    QPushButton *btnClear;

    void setupUi(QWidget *SetupTab)
    {
        if (SetupTab->objectName().isEmpty())
            SetupTab->setObjectName(QStringLiteral("SetupTab"));
        SetupTab->resize(445, 319);
        verticalLayout = new QVBoxLayout(SetupTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbTcpIp = new QGroupBox(SetupTab);
        gbTcpIp->setObjectName(QStringLiteral("gbTcpIp"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbTcpIp->sizePolicy().hasHeightForWidth());
        gbTcpIp->setSizePolicy(sizePolicy);
        gbTcpIp->setMinimumSize(QSize(0, 90));
        verticalLayout_4 = new QVBoxLayout(gbTcpIp);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        loTcpIpGroup = new QHBoxLayout();
        loTcpIpGroup->setObjectName(QStringLiteral("loTcpIpGroup"));
        loConnect = new QHBoxLayout();
        loConnect->setObjectName(QStringLiteral("loConnect"));
        loConnect->setContentsMargins(-1, 9, -1, -1);
        btnConnect = new QPushButton(gbTcpIp);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/Images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConnect->setIcon(icon);

        loConnect->addWidget(btnConnect);

        btnDisconnect = new QPushButton(gbTcpIp);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/Images/StopRed16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDisconnect->setIcon(icon1);

        loConnect->addWidget(btnDisconnect);


        loTcpIpGroup->addLayout(loConnect);

        loIpAddress = new QVBoxLayout();
        loIpAddress->setObjectName(QStringLiteral("loIpAddress"));
        loIpAddress->setContentsMargins(-1, -1, -1, 12);
        lblIpAddress = new QLabel(gbTcpIp);
        lblIpAddress->setObjectName(QStringLiteral("lblIpAddress"));

        loIpAddress->addWidget(lblIpAddress);

        editIpAddress = new QLineEdit(gbTcpIp);
        editIpAddress->setObjectName(QStringLiteral("editIpAddress"));

        loIpAddress->addWidget(editIpAddress);


        loTcpIpGroup->addLayout(loIpAddress);

        loPort = new QVBoxLayout();
        loPort->setObjectName(QStringLiteral("loPort"));
        loPort->setContentsMargins(-1, -1, -1, 12);
        lblPort = new QLabel(gbTcpIp);
        lblPort->setObjectName(QStringLiteral("lblPort"));

        loPort->addWidget(lblPort);

        editPort = new QLineEdit(gbTcpIp);
        editPort->setObjectName(QStringLiteral("editPort"));
        editPort->setMaximumSize(QSize(75, 16777215));

        loPort->addWidget(editPort);


        loTcpIpGroup->addLayout(loPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        loTcpIpGroup->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(loTcpIpGroup);


        verticalLayout->addWidget(gbTcpIp);

        gbDirectCommands = new QGroupBox(SetupTab);
        gbDirectCommands->setObjectName(QStringLiteral("gbDirectCommands"));
        sizePolicy.setHeightForWidth(gbDirectCommands->sizePolicy().hasHeightForWidth());
        gbDirectCommands->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(gbDirectCommands);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmdCommands = new QComboBox(gbDirectCommands);
        cmdCommands->setObjectName(QStringLiteral("cmdCommands"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmdCommands->sizePolicy().hasHeightForWidth());
        cmdCommands->setSizePolicy(sizePolicy1);
        cmdCommands->setEditable(true);

        horizontalLayout->addWidget(cmdCommands);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnSend = new QPushButton(gbDirectCommands);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/Images/Send.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSend->setIcon(icon2);

        horizontalLayout->addWidget(btnSend);

        horizontalSpacer_3 = new QSpacerItem(13, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnReceive = new QPushButton(gbDirectCommands);
        btnReceive->setObjectName(QStringLiteral("btnReceive"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/Images/Receive.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReceive->setIcon(icon3);

        horizontalLayout->addWidget(btnReceive);

        horizontalSpacer_4 = new QSpacerItem(40, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(gbDirectCommands);

        gbInstrumentMessages = new QGroupBox(SetupTab);
        gbInstrumentMessages->setObjectName(QStringLiteral("gbInstrumentMessages"));
        verticalLayout_3 = new QVBoxLayout(gbInstrumentMessages);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textInstrumentMessages = new QTextEdit(gbInstrumentMessages);
        textInstrumentMessages->setObjectName(QStringLiteral("textInstrumentMessages"));

        horizontalLayout_2->addWidget(textInstrumentMessages);

        btnClear = new QPushButton(gbInstrumentMessages);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/Images/Clear32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon4);

        horizontalLayout_2->addWidget(btnClear, 0, Qt::AlignTop);


        verticalLayout_3->addLayout(horizontalLayout_2);

        gbTcpIp->raise();

        verticalLayout->addWidget(gbInstrumentMessages);

#ifndef QT_NO_SHORTCUT
        lblIpAddress->setBuddy(editIpAddress);
        lblPort->setBuddy(editPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnConnect, btnDisconnect);
        QWidget::setTabOrder(btnDisconnect, editIpAddress);
        QWidget::setTabOrder(editIpAddress, editPort);
        QWidget::setTabOrder(editPort, cmdCommands);
        QWidget::setTabOrder(cmdCommands, btnSend);
        QWidget::setTabOrder(btnSend, btnReceive);
        QWidget::setTabOrder(btnReceive, textInstrumentMessages);
        QWidget::setTabOrder(textInstrumentMessages, btnClear);

        retranslateUi(SetupTab);

        QMetaObject::connectSlotsByName(SetupTab);
    } // setupUi

    void retranslateUi(QWidget *SetupTab)
    {
        SetupTab->setWindowTitle(QApplication::translate("SetupTab", "Form", 0));
        gbTcpIp->setTitle(QApplication::translate("SetupTab", "TCP/IP", 0));
        btnConnect->setText(QApplication::translate("SetupTab", "Connect", 0));
        btnDisconnect->setText(QApplication::translate("SetupTab", "Disconnect", 0));
        lblIpAddress->setText(QApplication::translate("SetupTab", "&Ip Address:", 0));
        lblPort->setText(QApplication::translate("SetupTab", "&Port:", 0));
        gbDirectCommands->setTitle(QApplication::translate("SetupTab", "Direct Commands", 0));
        btnSend->setText(QApplication::translate("SetupTab", "Send", 0));
        btnReceive->setText(QApplication::translate("SetupTab", "Receive", 0));
        gbInstrumentMessages->setTitle(QApplication::translate("SetupTab", "InstrumentMessages", 0));
        btnClear->setText(QApplication::translate("SetupTab", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class SetupTab: public Ui_SetupTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPTAB_H
