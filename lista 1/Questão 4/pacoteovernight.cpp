#include <iostream>
#include <string>
#include "pacoteovernight.h"

using namespace std;

PacoteOverNight::PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemerente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG, float taxaAdicional)
:Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario, nomeRemerente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, Peso, precoKG){
    this -> taxaAdicional = taxaAdicional;
}

void PacoteOverNight::setaxaAdicional(double taxaAdicional){
    this -> taxaAdicional = taxaAdicional;
}
double PacoteOverNight::getaxaAdicional(){
    return taxaAdicional;
}

double PacoteOverNight::calculaCusto(){
    double x = Pacote::calculaCusto();
    return (x + getaxaAdicional()) * this -> Peso;
}