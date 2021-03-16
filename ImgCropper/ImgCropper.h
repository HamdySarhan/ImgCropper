#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImgCropper.h"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <qimage.h>
#include<QFileDialog>
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QTextStream>
#include <iostream>
#include <qlineedit.h>
#include<istream>
#include <string>
#include <QTextStream>
#include <QString>
#include <string>
#include <QFile>
#include <QBuffer>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QTextEdit>
#include <QTextStream>
#include<QTemporaryFile>
#include <QVBoxLayout>
#include <iostream>
#include <String>
#include <QStringList>
#include <fstream>
#include "string.h"
#include <sstream>
#include <vector>
#include<QDir>


class ImgCropper : public QMainWindow 
{
    Q_OBJECT

public:
    ImgCropper(QWidget *parent = Q_NULLPTR);
    void readImage();
    //std::string transPath();
    //std::string next();
    //std::string previous();
private:
    Ui::ImgCropperClass ui;
};
