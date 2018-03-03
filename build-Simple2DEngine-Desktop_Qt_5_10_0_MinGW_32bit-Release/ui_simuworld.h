/********************************************************************************
** Form generated from reading UI file 'simuworld.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMUWORLD_H
#define UI_SIMUWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimuWorld
{
public:
    QWidget *centralWidget;
    QPushButton *ballTrigger;
    QPushButton *stopButton;
    QPushButton *continueButton;
    QPushButton *clearButton;
    QLCDNumber *lcdNumber;
    QPushButton *freedom;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimuWorld)
    {
        if (SimuWorld->objectName().isEmpty())
            SimuWorld->setObjectName(QStringLiteral("SimuWorld"));
        SimuWorld->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SimuWorld->sizePolicy().hasHeightForWidth());
        SimuWorld->setSizePolicy(sizePolicy);
        SimuWorld->setMinimumSize(QSize(400, 600));
        SimuWorld->setMaximumSize(QSize(800, 1000));
        centralWidget = new QWidget(SimuWorld);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ballTrigger = new QPushButton(centralWidget);
        ballTrigger->setObjectName(QStringLiteral("ballTrigger"));
        ballTrigger->setEnabled(true);
        ballTrigger->setGeometry(QRect(0, 0, 800, 600));
        ballTrigger->setFocusPolicy(Qt::NoFocus);
        ballTrigger->setCheckable(false);
        ballTrigger->setChecked(false);
        ballTrigger->setAutoDefault(false);
        ballTrigger->setFlat(true);
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(20, 490, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        stopButton->setFont(font);
        continueButton = new QPushButton(centralWidget);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setEnabled(false);
        continueButton->setGeometry(QRect(180, 490, 131, 45));
        continueButton->setFont(font);
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(340, 490, 131, 41));
        clearButton->setFont(font);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(720, 10, 71, 51));
        lcdNumber->setDigitCount(2);
        freedom = new QPushButton(centralWidget);
        freedom->setObjectName(QStringLiteral("freedom"));
        freedom->setGeometry(QRect(500, 440, 271, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(36);
        font1.setItalic(false);
        freedom->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 621, 191));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(72);
        font2.setItalic(false);
        label_2->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("AR ESSENCE"));
        font3.setPointSize(24);
        label->setFont(font3);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 10, 131, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font4.setPointSize(22);
        font4.setUnderline(false);
        label_3->setFont(font4);
        SimuWorld->setCentralWidget(centralWidget);
        label_2->raise();
        ballTrigger->raise();
        stopButton->raise();
        continueButton->raise();
        clearButton->raise();
        lcdNumber->raise();
        freedom->raise();
        label->raise();
        label_3->raise();
        menuBar = new QMenuBar(SimuWorld);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        SimuWorld->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimuWorld);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimuWorld->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimuWorld);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimuWorld->setStatusBar(statusBar);

        retranslateUi(SimuWorld);

        QMetaObject::connectSlotsByName(SimuWorld);
    } // setupUi

    void retranslateUi(QMainWindow *SimuWorld)
    {
        SimuWorld->setWindowTitle(QApplication::translate("SimuWorld", "SimuWorld", nullptr));
        ballTrigger->setText(QString());
        stopButton->setText(QApplication::translate("SimuWorld", "\345\201\234\346\255\242", nullptr));
        continueButton->setText(QApplication::translate("SimuWorld", "\347\273\247\347\273\255", nullptr));
        clearButton->setText(QApplication::translate("SimuWorld", "\346\270\205\351\231\244", nullptr));
        freedom->setText(QApplication::translate("SimuWorld", "\350\207\252\342\231\202\347\224\261\351\231\215\344\270\264", nullptr));
        label_2->setText(QApplication::translate("SimuWorld", "\345\205\250\346\230\216\346\230\237\345\244\247\350\210\236\345\217\260", nullptr));
        label->setText(QApplication::translate("SimuWorld", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("SimuWorld", "\350\225\211\350\272\201\347\250\213\345\272\246\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimuWorld: public Ui_SimuWorld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMUWORLD_H
