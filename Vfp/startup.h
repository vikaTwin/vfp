
#pragma once
#include <QObject>

namespace Ps {
    class MainView;
    class SetupTab;

    class StartUp final: public QObject
    {
        Q_OBJECT
    public:
        explicit StartUp();
        void show() const;
        ~StartUp();
    private:
        SetupTab& m_setupTab;
        MainView& m_mainView;

        explicit StartUp(const StartUp& rhs) = delete;
        StartUp& operator= (const StartUp& rhs) = delete;
    };
}

