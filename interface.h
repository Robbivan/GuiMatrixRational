#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include "matrix.h"

namespace Ui {
    class TInterface;
}

class TInterface : public QWidget
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
public slots:
    void inputValues();
    void transpose();
    void rank();
    void determinant();

private:
    Ui::TInterface *ui;
    MatrixSquare matr;
};
#endif // TINTERFACE_H
