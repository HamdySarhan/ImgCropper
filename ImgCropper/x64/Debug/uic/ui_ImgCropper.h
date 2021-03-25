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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImgCropperClass
{
public:
    QWidget *centralWidget;
    QPushButton *pBp;
    QPushButton *pBn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *path1;
    QPushButton *go1;
    QComboBox *combo1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Rh;
    QLabel *label_2;
    QLineEdit *Rw;
    QPushButton *load;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImgCropperClass)
    {
        if (ImgCropperClass->objectName().isEmpty())
            ImgCropperClass->setObjectName(QString::fromUtf8("ImgCropperClass"));
        ImgCropperClass->resize(492, 121);
        centralWidget = new QWidget(ImgCropperClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pBp = new QPushButton(centralWidget);
        pBp->setObjectName(QString::fromUtf8("pBp"));
        pBp->setGeometry(QRect(900, 610, 75, 23));
        pBn = new QPushButton(centralWidget);
        pBn->setObjectName(QString::fromUtf8("pBn"));
        pBn->setGeometry(QRect(980, 610, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 456, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        path1 = new QLineEdit(widget);
        path1->setObjectName(QString::fromUtf8("path1"));

        horizontalLayout_3->addWidget(path1);

        go1 = new QPushButton(widget);
        go1->setObjectName(QString::fromUtf8("go1"));

        horizontalLayout_3->addWidget(go1);

        combo1 = new QComboBox(widget);
        combo1->setObjectName(QString::fromUtf8("combo1"));

        horizontalLayout_3->addWidget(combo1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Rh = new QLineEdit(widget);
        Rh->setObjectName(QString::fromUtf8("Rh"));

        horizontalLayout->addWidget(Rh);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        Rw = new QLineEdit(widget);
        Rw->setObjectName(QString::fromUtf8("Rw"));

        horizontalLayout->addWidget(Rw);


        horizontalLayout_2->addLayout(horizontalLayout);

        load = new QPushButton(widget);
        load->setObjectName(QString::fromUtf8("load"));

        horizontalLayout_2->addWidget(load);


        verticalLayout->addLayout(horizontalLayout_2);

        ImgCropperClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImgCropperClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 21));
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
        pBp->setText(QApplication::translate("ImgCropperClass", "<", nullptr));
        pBn->setText(QApplication::translate("ImgCropperClass", ">", nullptr));
        label_3->setText(QApplication::translate("ImgCropperClass", "Path", nullptr));
        go1->setText(QApplication::translate("ImgCropperClass", "GO!", nullptr));
        label->setText(QApplication::translate("ImgCropperClass", "Aspect Ratio: H", nullptr));
        label_2->setText(QApplication::translate("ImgCropperClass", "W", nullptr));
        load->setText(QApplication::translate("ImgCropperClass", "Load Image", nullptr));
        menuEdit->setTitle(QApplication::translate("ImgCropperClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImgCropperClass: public Ui_ImgCropperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMGCROPPER_H
