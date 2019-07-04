#include "image.h"
#include <iostream>
#include <QPixmap>
#include "mainwindow.h"
#include "ui_mainwindow.h"
Image::Image(int i, string p, string n): id(i), path(p), name(n)
{
}
Image::~Image()
{
}
