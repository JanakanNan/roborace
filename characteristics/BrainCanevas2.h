//
// Created by Nandakumaran on 2019-06-25.
//

BrainCanevas2::BrainCanevas2():actionMoteur(){}
void BrainCanevas2::move(){actionMoteur->move(); return;}
void BrainCanevas2::moveBack(){actionMoteur->moveBack(); return;}
void BrainCanevas2::stepTurn(int dir){actionMoteur->stepTurn(dir); return;}
void BrainCanevas2::resetCounterGauche(){actionMoteur->resetCounterGauche(); return;}
void BrainCanevas2::resetCounterDroite(){actionMoteur->resetCounterDroite(); return;}
int BrainCanevas2::readCounterGauche(){return actionMoteur->readCounterGauche();}
int BrainCanevas2::readCounterDroite(){return actionMoteur->readCounterDroite();}

void BrainCanevas2::bindServiceActionMoteur(ServiceActionMoteur* service) {
    actionMoteur=service;
    return;
}