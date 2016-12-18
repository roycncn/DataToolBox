#ifndef DATATOOLBOX_H
#define DATATOOLBOX_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTextStream>
namespace Ui {
class DataToolBox;
}

class DataToolBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataToolBox(QWidget *parent = 0);
    ~DataToolBox();
private slots:

    void on_joinReadBtn_clicked();

    void on_joinWriteBtn_clicked();

private:
    Ui::DataToolBox *ui;
    QStringList fileList;

};

#endif // DATATOOLBOX_H
