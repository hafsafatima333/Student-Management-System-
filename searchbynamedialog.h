#ifndef SEARCHBYNAMEDIALOG_H
#define SEARCHBYNAMEDIALOG_H

#include <QDialog>

namespace Ui {
class SearchByNameDialog;
}

class SearchByNameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByNameDialog(QWidget *parent = nullptr);
    ~SearchByNameDialog();

private slots:
    // Ye do lines missing thi, isliye error aa raha tha
    void on_pushButton_clicked();    // Search Button
    void on_pushButton_2_clicked();  // Close Button

private:
    Ui::SearchByNameDialog *ui;
};

#endif // SEARCHBYNAMEDIALOG_H
