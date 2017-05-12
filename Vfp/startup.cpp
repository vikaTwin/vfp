#include "startup.h"
#include "View/setuptab.h"
#include "View/mainview.h"
#include "utils.h"
#include "Model/settings.h"
#include "Model/provider.h"

namespace Ps {
    StartUp::StartUp() :
        QObject(nullptr),
        m_setupTab(*new SetupTab(nullptr)),
        m_mainView(*new MainView(nullptr, m_setupTab))
    {
        Settings& my_settings = Provider::GetSettingsAsSingleton();
        my_settings.ParseJsonData();
    }

    StartUp::~StartUp()
    {
        Utils::DestructorMsg(this);
        delete &m_mainView;
    }

    void StartUp::show() const
    {
        m_mainView.show();
    }
}
