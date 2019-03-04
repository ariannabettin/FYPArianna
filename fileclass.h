#ifndef FILECLASS_H
#define FILECLASS_H

#include <QDialog>

namespace Ui {
class fileClass;
}

class fileClass : public QDialog
{
    Q_OBJECT

public:
    explicit fileClass(QWidget *parent = 0);
    ~fileClass();

private slots:

    void on_newFile_clicked();

    void on_close_clicked();

    void on_replaceButton_clicked();

    void on_openFileButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::fileClass *ui;
};

#endif // FILECLASS_H
