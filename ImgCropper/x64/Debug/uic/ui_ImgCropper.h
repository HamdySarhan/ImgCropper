/********************************************************************************
** Form generated from reading UI file 'ImgCropper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMGCROPPER_H
#define UI_IMGCROPPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImgCropperClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *Rh;
    QLineEdit *Rw;
    QLabel *label_2;
    QLabel *image;
    QPushButton *pBp;
    QPushButton *pBn;
    QPushButton *load;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImgCropperClass)
    {
        if (ImgCropperClass->objectName().isEmpty())
            ImgCropperClass->setObjectName(QString::fromUtf8("ImgCropperClass"));
        ImgCropperClass->resize(1147, 692);
        centralWidget = new QWidget(ImgCropperClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 91, 21));
        Rh = new QLineEdit(centralWidget);
        Rh->setObjectName(QString::fromUtf8("Rh"));
        Rh->setGeometry(QRect(100, 0, 113, 20));
        Rw = new QLineEdit(centralWidget);
        Rw->setObjectName(QString::fromUtf8("Rw"));
        Rw->setGeometry(QRect(240, 0, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 0, 16, 16));
        image = new QLabel(centralWidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(0, 30, 1141, 561));
        image->setScaledContents(true);
        pBp = new QPushButton(centralWidget);
        pBp->setObjectName(QString::fromUtf8("pBp"));
        pBp->setGeometry(QRect(900, 610, 75, 23));
        pBn = new QPushButton(centralWidget);
        pBn->setObjectName(QString::fromUtf8("pBn"));
        pBn->setGeometry(QRect(980, 610, 75, 23));
        load = new QPushButton(centralWidget);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(690, 0, 91, 23));
        ImgCropperClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImgCropperClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1147, 21));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        ImgCropperClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImgCropperClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ImgCropperClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImgCropperClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImgCropperClass->setStatusBar(statusBar);

        menuBar->addAction(menuEdit->menuAction());
        menuEdit->addSeparator();
        menuEdit->addSeparator();
        menuEdit->addSeparator();

        retranslateUi(ImgCropperClass);

        QMetaObject::connectSlotsByName(ImgCropperClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImgCropperClass)
    {
        ImgCropperClass->setWindowTitle(QApplication::translate("ImgCropperClass", "ImgCropper", nullptr));
        label->setText(QApplication::translate("ImgCropperClass", "Aspect Ratio: H", nullptr));
        label_2->setText(QApplication::translate("ImgCropperClass", "W", nullptr));
        image->setText(QString());
        pBp->setText(QApplication::translate("ImgCropperClass", "<", nullptr));
        pBn->setText(QApplication::translate("ImgCropperClass", ">", nullptr));
        load->setText(QApplication::translate("ImgCropperClass", "Load Image", nullptr));
        menuEdit->setTitle(QApplication::translate("ImgCropperClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImgCropperClass: public Ui_ImgCropperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMGCROPPER_H
