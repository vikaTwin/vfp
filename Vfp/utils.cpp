#include "utils.h"
#include "QString"
#include "QDebug"

namespace Ps {
    static QString DESTRUCTOR_MSG = QStringLiteral("Running the %1 destructor.");
    void Utils::DestructorMsg(const QString& value)
    {
        qDebug() << DESTRUCTOR_MSG.arg(value);
    }

    void Utils::DestructorMsg(const QObject* const obj)
    {
        DestructorMsg(obj->metaObject()->className());
    }
}
