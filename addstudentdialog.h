#ifndef ADDSTUDENTDIALOG_H
#define ADDSTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class AddStudentDialog;
}

class AddStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudentDialog(QWidget *parent = nullptr);
    ~AddStudentDialog();

private slots:
    void on_pushButton_Add_clicked();


    void on_pushButton_2_clicked();

    void on_AddStudentDialog_accepted();

private:
    Ui::AddStudentDialog *ui;
};

#endif
