#ifndef PILHAC_H
#define PILHAC_H

#pragma once

class PilhaC
{
public:
    PilhaC(int tam);
    ~PilhaC();
    void empilha(int val);
    int desempilha();
    int getTopo();
    bool vazia();

private:
    int max;
    int topo;
    int *vet;
};

#endif