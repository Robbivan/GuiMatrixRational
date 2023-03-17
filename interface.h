#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include <QPushButton>
class TInterface : public QWidget
{
    Q_OBJECT
    QPushButton* button_main;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
};
#endif // TINTERFACE_H
