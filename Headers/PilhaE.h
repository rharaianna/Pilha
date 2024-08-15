#ifndef PILHAE_H
#define PILHAE_H
#include "NoPilha.h"
#pragma once

class PilhaE
{
public:
    PilhaE();
    ~PilhaE();
    int getTopo();
    void empilha(int val);
    int desempilha();
    bool vazia();
    void imprime();

private:
    NoPilha *topo;
};

#endif