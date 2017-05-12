#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"

namespace Ps {

    MainView::MainView(QWidget *parent, SetupTab& setup) :
        QMainWindow(parent),
        ui(new Ui::MainView),
        m_setupTab(setup)
    {
        ui->setupUi(this);
        m_setupTab.setParent(this);
        ui->loSetupTab->addWidget(&m_setupTab);
    }

    MainView::~MainView()
    {
        delete ui;
    }

}
