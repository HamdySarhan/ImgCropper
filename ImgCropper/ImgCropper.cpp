#include "ImgCropper.h"
#include <qpixmap.h>
#include <qpushbutton.h>
#include<qgraphicsscene.h>
#include <qimage.h>

using namespace cv;
using namespace std;
ImgCropper::ImgCropper(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.load, &QPushButton::clicked, this, &ImgCropper::readImage);
    //connect(ui.pBn, &QPushButton::clicked, this, &ImgCropper::next);
    //connect(ui.pBp, &QPushButton::clicked, this, &ImgCropper::previous);
}


void ImgCropper::readImage(){

    

    //QPixmap pix("C:/Users/H.Sarhan/Desktop/bilder/Neuer Ordner/Screenshot_20210120_140307.416.jpg");
    //ui.image->setPixmap(pix);
    //QImage img = QImage(H, W, QImage::Format_RGB32);
    //QGraphicsScene* graphic = new QGraphicsScene(this);
    //graphic->addPixmap(QPixmap::fromImage(img));
    //ui.graphicsView->setScene(graphic);
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    QString Rh = ui.Rh->text();
    QString Rw = ui.Rw->text();
    Mat img = imread("C:/Users/H.Sarhan/Desktop/bilder/p/Screenshot_20210120_134944.066.jpg");
    QPixmap pix("C:/Users/H.Sarhan/Desktop/bilder/p/Screenshot_20210120_134944.066.jpg");
    ui.image->setPixmap(pix);
    //namedWindow("image", WINDOW_AUTOSIZE);
    bool showCrosshair = false;
    bool fromCenter = false;
    Rect roi;
    roi = selectROI( img, fromCenter, showCrosshair);
    imshow("ROI", img(roi));
    
    imwrite("C:/Users/H.Sarhan/Desktop/bilder/p/roi.png", img(roi));
    waitKey(0);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////selectROI("image", img)
    //Mat1b black = imread("C:/Users/H.Sarhan/Desktop/bilder/Neuer Ordner/Screenshot_20210120_140307.416.jpg");
    //Mat3b blackBGR;
    //cvtColor(black, blackBGR, COLOR_GRAY2BGR);
    //rectangle(blackBGR, Rect(10, 10, 100, 200), Scalar(0, 0, 0), 2);
    //
    //imshow("Image with Rect", blackBGR);
    //waitKey();
   
};

/*std::string ImgCropper::transPath() {

    //QString file_name = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath());
    //String fn;
    //fn = file_name.toStdString();
    //QPixmap pix(file_name);
    //ui.image->setPixmap(pix);
    //return fn;
    

}
std::string ImgCropper::next() {







}

std::string ImgCropper::previous() {







}*/