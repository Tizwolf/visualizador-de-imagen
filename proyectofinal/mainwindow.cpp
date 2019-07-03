#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFile>
#include <QMessageBox>
#include "link.h"
#include <stdlib.h>
#include <QString>
#include <QFileDialog>
#include <QtSql/QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this,tr("Open File"),"",tr("JPEG (*.jpg *.jpeg);;PNG (*.png)" ));

    imageObject = new QImage();
    imageObject->load(imagePath);
    int w = ui->picture->width();
    int h = ui->picture->height();
    image = QPixmap::fromImage(*imageObject).scaled(w,h);

    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->picture->setPixmap(image);
    ui->direction->setPlaceholderText(imagePath);
}

void MainWindow::on_save_clicked()
{
   //QString filename = QFileDialog::getSaveFileName(this, tr("Image Files (*.png *.jpg *.bmp)"));

    QString imagePath = QFileDialog::getSaveFileName(this,tr("Open File"),"",tr("JPEG (*.jpg *.jpeg);;PNG (*.png)" ));
    *imageObject = image.toImage();
    imageObject->save(imagePath);







}

void MainWindow::on_delet_clicked()
{
    ui->picture->clear();
    ui->direction->clear();
}

void MainWindow::on_open_clicked()
{


}

void MainWindow::on_direction_cursorPositionChanged(int arg1, int arg2)
{
   ui->direction->setReadOnly(true);
   ui->direction->setPlaceholderText("");
}

void MainWindow::on_next_clicked()
{

}

void MainWindow::on_previous_clicked()
{

}
