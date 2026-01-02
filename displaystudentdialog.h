#ifndef DISPLAYSTUDENTDIALOG_H
#define DISPLAYSTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class DisplayStudentDialog;
}

class DisplayStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayStudentDialog(QWidget *parent = nullptr);
    ~DisplayStudentDialog();

private slots:
    // --- YE LINE ZAROORI HAI ---
    void on_pushButton_Close_clicked();

private:
    Ui::DisplayStudentDialog *ui;
};

#endif // DISPLAYSTUDENTDIALOG_H
