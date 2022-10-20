#include <iostream>
#include <string>
#include "pacotedoisdias.h"

using namespace std;

PacoteDoisDias::PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG, float taxaAdicional)
:Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, Peso, precoKG){
    this -> taxaAdicional = taxaAdicional;
}

void PacoteDoisDias::setaxaAdicional(double taxaAdicional){
    this -> taxaAdicional = taxaAdicional;
}
double PacoteDoisDias::getaxaAdicional(){
    return taxaAdicional;
}

double PacoteDoisDias::calculaCusto(){
    return Pacote::calculaCusto() + getaxaAdicional();
}