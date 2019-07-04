#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsScene>
#include <QStringListModel>
#include "image.h"
#include <vector>
#include <iostream>
#include "link.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_add_clicked();

    void on_save_clicked();

    void on_delet_clicked();

    void on_open_clicked();

    void on_direction_cursorPositionChanged(int arg1, int arg2);

    void on_next_clicked();

    void on_previous_clicked();

    void on_import_2_clicked();

private:
    Ui::MainWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
