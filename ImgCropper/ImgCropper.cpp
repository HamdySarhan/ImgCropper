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
    connect(ui.go1, &QPushButton::clicked, this, &ImgCropper::go);
    // connect(ui.pBn, &QPushButton::clicked, this, &ImgCropper::next);
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
    Mat img = imread(transPath());
    //QPixmap pix("C:/Users/H.Sarhan/Desktop/bilder/p/Screenshot_20210120_134944.066.jpg");
    //ui.image->setPixmap(pix);
    namedWindow("image", WINDOW_AUTOSIZE);
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

std::string ImgCropper::transPath() {

    QString file_name = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath());
    String fn;
    fn = file_name.toStdString();
   // QPixmap pix(file_name);
   // ui.image->setPixmap(pix);
   
    
    return fn;
    

}



void ImgCropper::go(){
QDir dir(ui.path1->text());
QStringList images;

//entryList(QStringList() << "*.jpg" << "*.JPG", QDir::Files);
foreach(QFileInfo var, dir.entryInfoList()) {

    images.append(var.absoluteFilePath());
}

QString pathp = (images.at(0) + "/positiv");
QString pathn = (images.at(0) + "/negativ");
if (!QDir(pathp).exists()){
QDir().mkdir(pathp);
}
if(QDir().mkdir(pathn)){
QDir().mkdir(pathn);
}
String pathps = pathp.toStdString();
String pathns = pathn.toStdString();

int counter = 0;
   for (int i=0; i < images.size();i++){
    if (images.at(i).contains(".jpg", Qt::CaseInsensitive)){
       String fn = images.at(i).toStdString();
       Mat img = imread(fn);
       //namedWindow("image", WINDOW_AUTOSIZE);
       bool showCrosshair = false;
       bool fromCenter = false;
       Rect roi;
       stringstream geek1(ui.Rw->text().toStdString());
       stringstream geek2(ui.Rh->text().toStdString());
       int x = 0;
       geek1 >> x;
       int y = 0;
       geek2 >> y;

       roi.width = x;
       roi.height = y;
       roi = selectROI(img, fromCenter, showCrosshair);
       //imshow("ROI", img(roi));
       std::string savingName = pathps +"/"+"positiv"+ std::to_string(++counter) + ".jpg";
       imwrite(savingName, img(roi));
       String fn2 = images.at(i).toStdString();
       Mat img2 = imread(fn2);
       rectangle(img2, roi,Scalar(0,0,0,0),FILLED,8,0);
       std::string savingName2 = pathns + "/" + "negativ" + std::to_string(counter) + ".jpg";
       imwrite(savingName2, img2);
       waitKey(0);
      
    }
    else {
        i++;
    }

   }
    

}
