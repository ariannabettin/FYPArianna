#ifndef DOMAINFILE_H
#define DOMAINFILE_H

#include <QDialog>
#include "ui_domainfile.h"
#include <QTextStream>
#include <QMessageBox>
#include "gloabal.h"

namespace Ui {
class domainFile;
}

class domainFile : public QDialog
{
    Q_OBJECT

public:
    explicit domainFile(QWidget *parent = 0);
    ~domainFile();

private slots:
    void on_openFileButton_clicked();

    void on_saveButton_clicked();

    void on_newFile_clicked();

    void on_close_clicked();

private:
    Ui::domainFile *ui;
};

#endif // DOMAINFILE_H
