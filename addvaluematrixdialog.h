#ifndef ADDVALUEMATRIXDIALOG_H
#define ADDVALUEMATRIXDIALOG_H

#include <QDialog>
#include <QIntValidator>
#include <vector>
#include "number.h"

namespace Ui {
    class addValueMatrixDialog;
}

class addValueMatrixDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addValueMatrixDialog(QWidget *parent = nullptr);
    ~addValueMatrixDialog();

    std::vector<number> getVector();
    size_t getSize();

public slots:
    void inputSize();
    void addValue();
private:
    QIntValidator *valNum, *valDiv, *valSize;
    Ui::addValueMatrixDialog *ui;
    size_t size = 0;
    std::vector<number> arrNums;
protected:
    void accept() override;
};

#endif // ADDVALUEMATRIXDIALOG_H
