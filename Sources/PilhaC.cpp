#include "../Headers/PilhaC.h"
#include <iostream>
using namespace std;

PilhaC::PilhaC(int tam)
{
    max = tam;
    topo=-1;
    vet= new int[max];
}

PilhaC::~PilhaC()
{
    delete [] vet;
}

void PilhaC::empilha(int val){
    if(topo < max-1){
        topo++;
        vet[topo]=val;
    }
    cout<<"Vetor cheio"<<endl;
    exit(2);
}

int PilhaC::desempilha(){
    if(!vazia()){
        topo = topo -1;
        return vet[topo+1];
    }
    cout<<"Pilha vazia"<<endl;
    exit(1);
}

int PilhaC::getTopo(){
    if (!vazia()){
        return vet[topo];
    }
    
    cout<<"Pilha vazia"<<endl;
    exit(1);
}

bool PilhaC::vazia(){
    return topo==-1;
}