#include "addvaluematrixdialog.h"
#include "ui_addvaluematrixdialog.h"

addValueMatrixDialog::addValueMatrixDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addValueMatrixDialog)
{
    ui->setupUi(this);
}

addValueMatrixDialog::~addValueMatrixDialog()
{
    delete ui;
}
