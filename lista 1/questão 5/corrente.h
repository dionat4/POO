#ifndef CORRENTE_H
#define CORRENTE_H
#include "conta.h"

class Corrente: public Conta{
    private:
        double Taxa;
    public:
        Corrente(double Saldo, double Taxa);

        void setaxa(double Taxa);
        double getaxa();

        void taxacredito();
        void taxadebito();
};

#endif