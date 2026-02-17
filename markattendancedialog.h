#ifndef MARKATTENDANCEDIALOG_H
#define MARKATTENDANCEDIALOG_H

#include <QDialog>

namespace Ui {
class MarkAttendanceDialog;
}

class MarkAttendanceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MarkAttendanceDialog(QWidget *parent = nullptr);
    ~MarkAttendanceDialog();

private slots:
    void on_pushButton_Search_clicked();
    void on_pushButton_Mark_clicked();
    void on_pushButton_Close_clicked();

private:
    Ui::MarkAttendanceDialog *ui;
};

#endif
