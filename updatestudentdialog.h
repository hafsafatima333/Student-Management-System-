#ifndef UPDATESTUDENTDIALOG_H
#define UPDATESTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateStudentDialog;
}

class UpdateStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateStudentDialog(QWidget *parent = nullptr);
    ~UpdateStudentDialog();

private slots:
    // Ye naye functions add kiye hain taake error khatam ho
    void on_pushButton_Search_clicked();
    void on_pushButton_Update_clicked();
    void on_pushButton_3_clicked(); // Cancel button (agar iska naam pushButton_3 hai)

private:
    Ui::UpdateStudentDialog *ui;
};

#endif // UPDATESTUDENTDIALOG_H
