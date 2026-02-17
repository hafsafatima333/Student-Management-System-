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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::SearchByNameDialog *ui;
};

#endif
