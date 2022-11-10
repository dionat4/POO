#include <iostream>
#include <string>
#include "pacote.h"
#ifndef PACOTEDOISDIAS_H
#define PACOTEDOISDIAS_H

using namespace std;

class PacoteDoisDias: protected Pacote{
    private:
        double taxaAdicional;
    public:
        PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG, float taxaAdicional);

        double getaxaAdicional();
        void setaxaAdicional(double taxaAdicional);

        double calculaCusto();
};

#endif