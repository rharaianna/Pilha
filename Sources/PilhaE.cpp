#include "../Headers/PilhaE.h"
#include <iostream>
using namespace std;

PilhaE::PilhaE()
{
  topo=NULL;
}

PilhaE::~PilhaE()
{
    NoPilha *p = topo;
    while(topo!= NULL){
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

int PilhaE::getTopo(){
    if(topo!=NULL){
        return topo->getInfo();
    }
    cout << "ERRO: Pilha vazia!" << endl;
    exit(1);
}

void PilhaE::empilha(int val){ //ta empilhando na primeira posição
    NoPilha *p = new NoPilha();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
}

int PilhaE::desempilha(){
    NoPilha * p;
    int val;
    if(!vazia()){
        p = topo;
        topo = topo->getProx();
        val = p->getInfo();
        delete p;
        return val; //Return pode ficar aqui?
    }
    cout<<"Lista Vazia"<<endl;
    exit(1);
    
}

bool PilhaE::vazia(){
    return (topo==NULL);
}

void PilhaE::imprime(){
    cout << "Pilha: ";
    for(NoPilha *p = topo; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}