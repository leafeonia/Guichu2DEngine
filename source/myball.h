#ifndef MYBALL_H
#define MYBALL_H

#include <QLabel>
#include <QCoreApplication>
#include <QElapsedTimer>
#include <cmath>
#include <ctime>
#include <random>
#include <QDir>
#include <QDebug>
#include <QVideoWidget>
#include <QMediaPlayer>

class ball {
public:
    ball(int count, double x, double y, double gl,
         double gr, double gu, double gd, QWidget* pthis,bool mode):
        posx(x), posy(y),
        gl(gl), gr(gr), gu(gu), gd(gd)
    {
        myball = createBall(count, pthis,mode);
    }

    QLabel *createBall(int count, QWidget* pthis,bool mode) {
        QLabel *tempball = new QLabel(pthis);

        int pixNum = 1;
        if(!mode) pixNum = ((int)(posx+posy))%5+1;
        else pixNum = 6;
        if(mode) {width = 140,height = 140;}
        tempball->setGeometry(posx, posy, width, height);
        tempball->setObjectName(QString::number(pixNum));
        tempball->setAlignment(Qt::AlignCenter);


        QPixmap circle = QPixmap(
            ":/Resources/ball"
                    + QString::number(pixNum) + ".png");

        qDebug() << "Ball " + tempball->objectName() + " with color "
                    + QString::number(pixNum) + " generated at ("
                    + QString::number(posx) + ", " + QString::number(posy) + ").";

        tempball->setPixmap(circle);

        tempball->show();

        return tempball;
    }

    void fall() {
        //add the speed according to the gravity law
        speedy += 0.030;
    }

    void invisible(){
        myball->setVisible(false);
    }
    void go() {
        posx += speedx;
        posy += speedy;

        myball->setGeometry((int)posx, (int)posy,
                            width, height);
    }

    void groundDetectRespond() {
        //Left wall
        if (posx < gl) {
            posx = gl;
            speedx = 0 - speedx;
            qDebug() << myball->objectName() + " touches the left wall at ("
                        + QString::number(posx) + ", " + QString::number(posy) + ").";
        }
        //Right wall
        if (posx > gr-width) {
            posx = gr-width;
            speedx = 0 - speedx;
            qDebug() << myball->objectName() + " touches the right wall at ("
                        + QString::number(posx) + ", " + QString::number(posy) + ").";
        }
        //Ground
        if (posy > gd-height) {
            posy = gd-height;
            speedy *= 1;
            speedx *= 1;
            if(speedy <= 0.6){
                speedy = 0;
            }
            //This app does not take fraction into consideration.
            //
            //if(speedx <= 0.05){
             //   speedx = 0;
            //}

            speedy = 0 - speedy;
            qDebug() << myball->objectName() + " touches the ground at ("
                        + QString::number(posx) + ", " + QString::number(posy) + ").";
        }
    }

    int collisionDetectRespond(ball* b) {
        int ans = 0,distance = 70;
        double disx = (posx + width/2) - (b->posx + b->width/2);
        double disy = (posy + height/2) - (b->posy + b->height/2);
        if(b->width == 140) distance = 105;//collision on philosopher ball
        double dis = sqrt(pow(disx,2) + pow(disy,2));
        if (dis < distance) {
            qDebug() << "dis: " << dis << "distance:" << distance;
            if(b->myball->objectName().operator == ("6")) ans = 1;

             qDebug() << "Collision between " + myball->objectName()
                        + " and " + b->myball->objectName() + " detected at ("
                        + QString::number(posx) + ", " + QString::number(posy) + ").";

            double e = 1 * (pow(speedx,2) + pow(speedy,2));
            double eb = 1 * (pow(b->speedx,2) + pow(b->speedy,2));
            //in case one has stopped on the ground, without this may cause error
            if(!e)e+=0.1;if(!eb)eb+=0.1;

            //swap their energy
            speedx = sqrt(eb) * (disx / dis);
            speedy = sqrt(eb) * (disy / dis);
            b->speedx = - sqrt(e) * (disx / dis);
            b->speedy = - sqrt(e) * (disy / dis);

            if((myball->objectName().operator ==("1") && b->myball->objectName().operator ==("2"))||
                    (myball->objectName().operator ==("2") && b->myball->objectName().operator ==("1")))
                   {
                QMediaPlayer *music = new QMediaPlayer();
                music->setMedia(QUrl("qrc:/Resources/金馆长.wav"));
                music->setVolume(30);
                music->play();
                //delete music;
                qDebug() << "哈哈哈哈!!";
            }
            if((myball->objectName().operator ==("3") && b->myball->objectName().operator ==("4"))||
                    (myball->objectName().operator ==("4") && b->myball->objectName().operator ==("3")))
                   {
                int rand = (int)posx % 2;
                QMediaPlayer *music = new QMediaPlayer();
                music->setMedia(QUrl("qrc:/Resources/金坷垃"+ QString::number(rand) +".mp3"));
                music->setVolume(20);
                music->play();
                qDebug() << "金坷垃!!";
            }
            if(myball->objectName().operator ==("5") && b->myball->objectName().operator ==("5"))
                   {
                int rand = (int)posx % 4;
                QMediaPlayer *music = new QMediaPlayer();
                music->setMedia(QUrl("qrc:/Resources/葛炮"+ QString::number(rand) +".mp3"));
                music->setVolume(100);
                music->play();
                //delete music;
                qDebug() << "葛炮!!";
            }

        }
        return ans;
    }
    ~ball() {
        qDebug() << myball->objectName() + " is being deleted.";
        delete myball;
    }


private:
    QLabel *myball;
    double posx = 0, posy = 0;
    int width = 70, height = 70;
    int gl = 0, gr = 0, gu = 0, gd = 0;
    double speedx = 0, speedy = 0;
    bool mode = false;
    int dele = 0;

};


#endif // MYBALL_H
