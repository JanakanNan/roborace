#include "Parameters.h"
#include "BrainCanevas.h"

int MAXPASDEJEU=900;

int pasDeJeuCourrant;

void BrainCanevas::activate() {
    pasDeJeuCourrant=0;
    //wait(1);
    //actionMoteur->initHeadingDeg();
    return;
}

void BrainCanevas::step() {

    if (pasDeJeuCourrant>MAXPASDEJEU) {return;}
    pasDeJeuCourrant++;


    //SOME RANDOM STUFF
    /*if (pasDeJeuCourrant>=121){
        if (readCounterGauche()>=10000 && readCounterDroite() >=10000) {
            moveBack();
            if (readCounterGauche()>=15000 && readCounterDroite()>=15000){
                resetCounterDroite();
                resetCounterGauche();
            }
        } else {
            move();
        }
        return;
    }*/
    /* if (pasDeJeuCourrant>=120){
         resetCounterGauche();
         resetCounterDroite();
     }

    if (pasDeJeuCourrant>=210){
        return;
    }

    if (pasDeJeuCourrant>=170 && pasDeJeuCourrant<=200){
        move();
        return;
    }

    /* if (pasDeJeuCourrant>=141 && pasDeJeuCourrant<=160){
         move();
         return;
     }


    if (pasDeJeuCourrant>=140 && pasDeJeuCourrant<=160){
        stepTurn(RIGHT);
        return;
    }*/

    if (pasDeJeuCourrant>=120 && pasDeJeuCourrant<=140){
        move();
        return;
    }

    if (pasDeJeuCourrant<=100){
        stepTurn(LEFT);
        return;
    }

    if (pasDeJeuCourrant>80 && pasDeJeuCourrant<100){
        return;
    }

    if (pasDeJeuCourrant<=80){
        move();
        return;
    }

    return;
}