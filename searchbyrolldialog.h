#ifndef SEARCHBYROLLDIALOG_H
#define SEARCHBYROLLDIALOG_H

#include <QDialog>

namespace Ui {
class SearchByRollDialog;
}

class SearchByRollDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByRollDialog(QWidget *parent = nullptr);
    ~SearchByRollDialog();

private slots:
    void on_pushButton_Search_clicked();
    void on_pushButton_Close_clicked();

private:
    Ui::SearchByRollDialog *ui;
};

#endif
