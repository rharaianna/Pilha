#include "../Headers/NoPilha.h"

NoPilha::NoPilha()
{

}

NoPilha::~NoPilha()
{

}

NoPilha* NoPilha::getProx(){
    return prox;
}

int NoPilha::getInfo(){
    return info;
}

void NoPilha::setInfo(int val){
    info = val;
}

void NoPilha::setProx(NoPilha *p){
    prox = p;
}