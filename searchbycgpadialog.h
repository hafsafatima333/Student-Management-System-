#ifndef SEARCHBYCGPADIALOG_H
#define SEARCHBYCGPADIALOG_H

#include <QDialog>

namespace Ui {
class SearchByCgpaDialog;
}

class SearchByCgpaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchByCgpaDialog(QWidget *parent = nullptr);
    ~SearchByCgpaDialog();

    // --- YE LINE ZAROORI HAI (Jo Error Hataegi) ---
    void setMode(bool rangeMode);

private slots:
    void on_pushButton_Search_clicked();
    void on_pushButton_Close_clicked();

private:
    Ui::SearchByCgpaDialog *ui;
    bool isRangeSearch; // Ye yaad rakhega ke hum kis mode mein hain
};

#endif // SEARCHBYCGPADIALOG_H
