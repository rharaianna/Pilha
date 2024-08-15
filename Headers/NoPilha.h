#ifndef NOPILHA_H
#define NOPILHA_H

#pragma once

class NoPilha
{
public:
    NoPilha();
    ~NoPilha();
    NoPilha* getProx();
    int getInfo();
    void setInfo(int val);
    void setProx(NoPilha *p);

private:
    NoPilha *prox;
    int info;

};

#endif