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
    // Ye raha naya function declaration
    void on_pushButton_Add_clicked();

    // Agar cancel button bhi hai to:
    // void on_pushButton_Cancel_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddStudentDialog *ui;
};

#endif // ADDSTUDENTDIALOG_H
