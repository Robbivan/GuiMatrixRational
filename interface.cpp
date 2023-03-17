#include "interface.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{
    button_main =  new QPushButton("main",this);
    button_main->setGeometry(50,20,60,25);

}

TInterface::~TInterface()
{

}

