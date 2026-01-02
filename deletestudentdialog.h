#ifndef DELETESTUDENTDIALOG_H
#define DELETESTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class DeleteStudentDialog;
}

class DeleteStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteStudentDialog(QWidget *parent = nullptr);
    ~DeleteStudentDialog();

private slots:
    // Ye do lines missing thin, isliye error aa raha tha
    void on_pushButton_Delete_clicked();
    void on_pushButton_Close_clicked();

private:
    Ui::DeleteStudentDialog *ui;
};

#endif // DELETESTUDENTDIALOG_H
