#include <iostream>
#include <string>
#include "pacote.h"
#ifndef PACOTEOVERNIGHT_H
#define PACOTEOVERNIGHT_H

using namespace std;

class PacoteOverNight: protected Pacote{
    private:
        double taxaAdicional;
    public:
        PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemerente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG, float taxaAdicional);

        double getaxaAdicional();
        void setaxaAdicional(double taxaAdicional);

        double calculaCusto();
};

#endif