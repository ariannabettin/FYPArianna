#ifndef FILECLASSPF_H
#define FILECLASSPF_H

#include <QDialog>

namespace Ui {
class fileclassPF;
}

class fileclassPF : public QDialog
{
    Q_OBJECT

public:
    explicit fileclassPF(QWidget *parent = 0);
    ~fileclassPF();

private slots:
    void on_readButton_clicked();

    void on_writeButton_clicked();

    void on_newFile_clicked();

    void on_close_clicked();

    void on_replaceButton_clicked();

private:
    Ui::fileclassPF *ui;
};

#endif // FILECLASSPF_H
