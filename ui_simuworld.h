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
    QLabel *label;
    QPushButton *stopButton;
    QPushButton *continueButton;
    QPushButton *clearButton;
    QLCDNumber *lcdNumber;
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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 171, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(10, 320, 250, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        stopButton->setFont(font1);
        continueButton = new QPushButton(centralWidget);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setEnabled(false);
        continueButton->setGeometry(QRect(270, 320, 250, 45));
        continueButton->setFont(font1);
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(530, 320, 250, 45));
        clearButton->setFont(font1);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(720, 10, 71, 51));
        lcdNumber->setDigitCount(2);
        SimuWorld->setCentralWidget(centralWidget);
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
        label->setText(QApplication::translate("SimuWorld", "\346\265\213\350\257\225", nullptr));
        stopButton->setText(QApplication::translate("SimuWorld", "\345\201\234\346\255\242", nullptr));
        continueButton->setText(QApplication::translate("SimuWorld", "\347\273\247\347\273\255", nullptr));
        clearButton->setText(QApplication::translate("SimuWorld", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimuWorld: public Ui_SimuWorld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMUWORLD_H
