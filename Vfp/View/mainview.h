#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include "View/setuptab.h"

namespace Ui {
class MainView;
}

namespace Ps {
    class SetupTab;
    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainView(QWidget *parent, Ps::SetupTab& setupTab);
        ~MainView();

    private:
        Ui::MainView *ui;
        SetupTab& m_setupTab;
    };
}

#endif // MAINVIEW_H
