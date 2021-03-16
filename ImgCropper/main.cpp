#include "ImgCropper.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImgCropper w;
    w.show();
    return a.exec();
}
