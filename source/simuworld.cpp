#include "simuworld.h"
#include "ui_simuworld.h"
#include <vector>
#include <exception>
#include <QTimer>
#include <QTime>
#include <QMessageBox>
#include <windows.h>

std::vector<ball*> ballVector;
int count = 0;
int fps = 0;
bool superFlag = true;
bool philosopher = false;
QLabel *totem;

QTimer *timer1, *timer2,*timer3;
int timer1Interval = 15;

SimuWorld::SimuWorld(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimuWorld)
{
    ui->setupUi(this);
    ui->freedom->setEnabled(false);
    //ui->ballTrigger->setVisible(false);
    connect(ui->ballTrigger, SIGNAL(clicked(bool)), this, SLOT(CreateBall()));
    connect(ui->stopButton, SIGNAL(clicked(bool)), this, SLOT(StopAll()));
    connect(ui->continueButton, SIGNAL(clicked(bool)), this, SLOT(ContinueAll()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), this, SLOT(ClearAll()));
    connect(ui->freedom,SIGNAL(clicked(bool)),this,SLOT(philosophy_revive()));

    timer1 = new QTimer(this);
    timer1->start(timer1Interval);
    connect(timer1, SIGNAL(timeout()), this, SLOT(BallMoving()));

    timer2 = new QTimer(this);
    timer2->start(1000);
    connect(timer2, SIGNAL(timeout()), this, SLOT(ShowFPS()));
}

SimuWorld::~SimuWorld()
{
    delete ui;
}

void SimuWorld::BallMoving() {
    try{
        for(int i = 0; i<(signed)ballVector.size(); i++){
            ballVector[i]->fall();
            ballVector[i]->go();
            ballVector[i]->groundDetectRespond();
            for(int j = i+1; j<(signed)ballVector.size(); j++){
                int ans = ballVector[i]->collisionDetectRespond(ballVector[j]);
                if(ans == 0) continue;
                std::vector<ball*>::iterator it = ballVector.begin();
                if(ans == 1) {ballVector[i]->invisible();ballVector.erase(it+i);}
            }
        }

        fps++;
        ui->lcdNumber->display((int)ballVector.size());
    }catch (std::exception e){
        ui->label->setText(e.what());
        ClearAll();
    }
}

void SimuWorld::CreateBall() {
    //superFlag = true;
    timer1->start();
    ui->stopButton->setEnabled(true);
    ui->continueButton->setEnabled(false);
    if(count == 19 && !philosopher)QMessageBox::warning(NULL, "Warning", "空气中弥漫起自♂由的气息", QMessageBox::Yes );
    if(count == 24 && !philosopher) ui->freedom->setEnabled(true);

    QPoint mousePos;
    mousePos = QWidget::mapFromGlobal(QCursor::pos());

    ball *newball = new ball(count, mousePos.x(), mousePos.y(),
                           ui->ballTrigger->x(),
                           ui->ballTrigger->x()+ui->ballTrigger->width(),
                           ui->ballTrigger->y(),
                           ui->ballTrigger->y()+ui->ballTrigger->height(),
                           this,philosopher);
    ballVector.push_back(newball);
    count++;
}

void SimuWorld::StopAll() {
    superFlag = false;
    timer1->stop();
    ui->stopButton->setEnabled(false);
    ui->continueButton->setEnabled(true);
    qDebug() << "Stopped.";
}

void SimuWorld::ContinueAll() {
    superFlag = true;
    timer1->start();
    ui->stopButton->setEnabled(true);
    ui->continueButton->setEnabled(false);
    BallMoving();
    qDebug() << "Recovered.";
}

void SimuWorld::ClearAll() {
    ball *tempball = NULL;
    for(int i = 0; i<ballVector.size(); i++){
        delete ballVector[i];
    }
    ballVector.clear();
    //ui->label->setText(QString::number(0));
    ui->stopButton->setEnabled(true);
    ui->continueButton->setEnabled(false);
    count = 0;
    qDebug() << "All cleared.";
}

void SimuWorld::ShowFPS() {
    if(fps>80) {
        timer1Interval++;
        timer1->stop();
        if(superFlag)timer1->start(timer1Interval);
    } else {
        if(fps>0 && timer1Interval>1)timer1Interval--;
        timer1->stop();
        if(superFlag)timer1->start(timer1Interval);
    }
    ui->label->setText("FPS: "+QString::number(fps));
    fps = 0;
}
void SimuWorld::del(){
    totem->clear();
}

void SimuWorld::philosophy_revive(){
    philosopher = true;
    totem = new QLabel(this);
    totem->setGeometry(250, 160, 300, 300);
    totem->setAlignment(Qt::AlignCenter);
    QPixmap befall = QPixmap(":/Resources/香蕉登场.jpg");
    totem->setPixmap(befall);
    totem->show();
    timer3 = new QTimer(this);
    timer3->start(1000);
    connect(timer3, SIGNAL(timeout()), this, SLOT(del()));
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/Resources/FAQ.wav"));
    music->setVolume(100);
    music->play();
    ui->freedom->setEnabled(false);
}
