/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *spaces;
    QWidget *RPG_space;
    QFrame *character;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *Note_space;
    QFrame *frame;
    QLabel *info;
    QPushButton *change_space;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        spaces = new QStackedWidget(centralwidget);
        spaces->setObjectName("spaces");
        spaces->setGeometry(QRect(120, 0, 681, 441));
        RPG_space = new QWidget();
        RPG_space->setObjectName("RPG_space");
        character = new QFrame(RPG_space);
        character->setObjectName("character");
        character->setGeometry(QRect(0, 0, 171, 301));
        character->setStyleSheet(QString::fromUtf8("background-color:silver;"));
        character->setFrameShape(QFrame::StyledPanel);
        character->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(RPG_space);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 300, 171, 141));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 58, 16));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 58, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 58, 16));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 90, 111, 16));
        spaces->addWidget(RPG_space);
        Note_space = new QWidget();
        Note_space->setObjectName("Note_space");
        spaces->addWidget(Note_space);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 120, 71));
        frame->setStyleSheet(QString::fromUtf8("border: 1px solid #E6E6E6; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\201 \320\275\320\265\320\271\321\202\321\200\320\260\320\273\321\214\320\275\321\213\320\274 \321\206\320\262\320\265\321\202\320\276\320\274 */\n"
"    background-color: #FFFFFF; /* \320\244\320\276\320\275 \320\262 \320\261\320\265\320\273\320\276\320\274 \321\206\320\262\320\265\321\202\320\265 */\n"
"    border-radius: 5px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 */"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        info = new QLabel(frame);
        info->setObjectName("info");
        info->setGeometry(QRect(0, 0, 119, 31));
        info->setStyleSheet(QString::fromUtf8(" font-size: 12px;\n"
"color:black;"));
        change_space = new QPushButton(frame);
        change_space->setObjectName("change_space");
        change_space->setGeometry(QRect(0, 30, 119, 32));
        change_space->setStyleSheet(QString::fromUtf8("\n"
"/*color:white;\n"
"background-color:orange;*/\n"
"background-color: #FFA500; /* \320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 */\n"
"    border: 1px solid #FFA500; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\201 \321\206\320\262\320\265\321\202\320\276\320\274 \321\204\320\276\320\275\320\260 */\n"
"    color: #FFFFFF; /* \320\221\320\265\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    padding: 5px 15px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border-radius: 5px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "HP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mana", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "expiriens", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "active quest", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "Space now:", nullptr));
        change_space->setText(QCoreApplication::translate("MainWindow", "Anoter space", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
