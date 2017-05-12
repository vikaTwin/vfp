#ifndef SETUPTAB2_H
#define SETUPTAB2_H

#include <QWidget>

namespace Ui {
class setuptab2;
}

class setuptab2 : public QWidget
{
    Q_OBJECT

public:
    explicit setuptab2(QWidget *parent = 0);
    ~setuptab2();

private:
    Ui::setuptab2 *ui;
};

#endif // SETUPTAB2_H
