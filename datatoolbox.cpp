#include "datatoolbox.h"
#include "ui_datatoolbox.h"

DataToolBox::DataToolBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataToolBox)
{
    ui->setupUi(this);
}

DataToolBox::~DataToolBox()
{
    delete ui;
}



void DataToolBox::on_joinReadBtn_clicked()
{
    fileList.clear();
    ui->joinFile->clear();
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    fileList = dialog.getOpenFileNames(this, "Select a file to open...", QDir::homePath());
    for(QStringList::Iterator it = fileList.begin();
        it != fileList.end(); ++it){
        ui->joinFile->appendPlainText(*it);
    }
}

void DataToolBox::on_joinWriteBtn_clicked()
{
    if(fileList.length()<=0){ return;}
    QString file = QFileDialog::getSaveFileName(this, "Select a file to save...", QDir::homePath());
    QString finalText;
    for(QStringList::Iterator it = fileList.begin();
        it != fileList.end(); ++it){
        finalText.append(QFile(*it).readAll());
    }
    fileList.clear();
     ui->joinFile->appendPlainText(finalText);
}
