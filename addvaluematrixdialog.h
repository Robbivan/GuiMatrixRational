#ifndef ADDVALUEMATRIXDIALOG_H
#define ADDVALUEMATRIXDIALOG_H

#include <QDialog>

namespace Ui {
    class addValueMatrixDialog;
}

class addValueMatrixDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addValueMatrixDialog(QWidget *parent = nullptr);
    ~addValueMatrixDialog();

private:
    Ui::addValueMatrixDialog *ui;
};

#endif // ADDVALUEMATRIXDIALOG_H
