#include "interface.h"
#include "ui_interface.h"

#include <QPushButton>
#include <QMessageBox>
#include "addvaluematrixdialog.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::TInterface)
{
    ui->setupUi(this);
    connect(ui->inputValueButton, &QPushButton::clicked,
            this, &TInterface::inputValues);
    connect(ui->calcDeterminantButton, &QPushButton::clicked,
            this, &TInterface::determinant);
    connect(ui->calcRangButton, &QPushButton::clicked,
            this, &TInterface::rank);
    connect(ui->outputTransposeButton, &QPushButton::clicked,
            this, &TInterface::transpose);
}

TInterface::~TInterface() {
    delete ui;
}

void TInterface::inputValues() {
    addValueMatrixDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {

    }
}

void TInterface::determinant() {
    QMessageBox msg(this);
    QString ans;
    ans << matr.determinant();
    msg.setText(QStringLiteral("Определитель матрицы равен ") + ans);
    msg.exec();
}

void TInterface::rank() {
    QMessageBox msg(this);
    QString ans = QString().setNum(matr.rank());
    msg.setText(QStringLiteral("Ранг матрицы равен ") + ans);
    msg.exec();
}

void TInterface::transpose() {
    QMessageBox msg(this);
    QString ans = "0";
    //ans << matr.transposed();
    msg.setText(QStringLiteral("Транспонированная матрица:\n") + ans);
    msg.exec();
}
