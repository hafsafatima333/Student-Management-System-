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
    void on_pushButton_Search_clicked();
    void on_pushButton_Update_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::UpdateStudentDialog *ui;
};

#endif
