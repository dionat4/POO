#ifndef POUPANCA_H
#define POUPANCA_H
#include <iostream>
#include "conta.h"

using namespace std;

class Poupanca: public Conta{
private:
    int Rendimento;

public:

    Poupanca(double Saldo, int Rendimento);

    void setRendimento(int Redimento);
    int getRendimento();
    
    void calculaRendimento();

};

#endif // POUPANCA_H