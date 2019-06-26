//
// Created by Nandakumaran on 2019-06-25.
//
#include "Parameters.h"
#include "BrainCanevas2.h"
#include "Capteur.h"


int MAXPASDEJEU=900;

int pasDeJeuCourrant;

void BrainCanevas2::activate() {
    pasDeJeuCourrant=0;
    return;
}

void BrainCanevas2::step() {

    //objet bloquant
    if (detectionIseeyou() == true){
        stop();
        return;
    }

    if (pasDeJeuCourrant > MAXPASDEJEU) { return; }
    pasDeJeuCourrant++;

    if (pasDeJeuCourrant<=80){
        move();
        return;
    }

    if (pasDeJeuCourrant>80 && pasDeJeuCourrant<100){
        clignoter();
        return;
    }

    if (pasDeJeuCourrant>100 && pasDeJeuCourrant<130){
        stepTurn(LEFT);
        return;
    }

    if (pasDeJeuCourrant>=130 && pasDeJeuCourrant<=170){
        move();
        return;
    }

    if (pasDeJeuCourrant>170 && pasDeJeuCourrant<190){
        clignoter();
        return;
    }


    if (pasDeJeuCourrant>190 && pasDeJeuCourrant<=210){
        stepTurn(RIGHT);
        return;
    }

    if (pasDeJeuCourrant>210 && pasDeJeuCourrant<230){
        clignoter();
        return;
    }

    if (pasDeJeuCourrant>230 && pasDeJeuCourrant<=290){
        move();
        return;
    }

    return;

}