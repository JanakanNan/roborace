//
// Created by Nandakumaran on 2019-06-25.
//
#include "Parameters.h"
#include "BrainCanevas2.h"

int MAXPASDEJEU=900;

int pasDeJeuCourrant;

void BrainCanevas2::activate() {
    pasDeJeuCourrant=0;
    return;
}

void BrainCanevas2::step() {

    if (pasDeJeuCourrant > MAXPASDEJEU) { return; }
    pasDeJeuCourrant++;

    if (pasDeJeuCourrant<=80){
        move();
        return;
    }

    if (pasDeJeuCourrant>80 && pasDeJeuCourrant<100){

        return;
    }

    if (pasDeJeuCourrant<=100){
        stepTurn(LEFT);
        return;
    }

    if (pasDeJeuCourrant>=120 && pasDeJeuCourrant<=140){
        move();
        return;
    }


    if (pasDeJeuCourrant>=140 && pasDeJeuCourrant<=160){
        stepTurn(RIGHT);
        return;
    }

    if (pasDeJeuCourrant>=141 && pasDeJeuCourrant<=160){
        move();
        return;
    }

    if (pasDeJeuCourrant>=170 && pasDeJeuCourrant<=200){
        move();
        return;
    }

    if (pasDeJeuCourrant>=210){
        return;
    }

    return;

}