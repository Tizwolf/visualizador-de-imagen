#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <QImage>
using namespace  std;

class Image
{
    public:
        int id;
        string path;
        string name;
    public:
        Image(int i=0, string p="none",string n="none");
        void Show(Image & x);
        ~Image();
};

#endif // IMAGEN_H
