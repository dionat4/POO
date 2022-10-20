#include <iostream>
#include <string>
#include "pacote.h"

using namespace std;

Pacote::Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG){
    this -> nomeDestinatario = nomeDestinatario;
    this -> enderecoDestinatario = enderecoDestinatario;
    this -> cidadeDestinatario = cidadeDestinatario;
    this -> estadoDestinatario = estadoDestinatario;
    this -> cepDestinatario = cepDestinatario;
    this -> nomeRemetente = nomeRemetente;
    this -> enderecoRemetente = enderecoRemetente;
    this -> cidadeRemetente = cidadeRemetente;
    this -> estadoRemetente = estadoRemetente;
    this -> cepDestinatario = cepDestinatario;
    this -> Peso = Peso;
    this -> precoKG = precoKG;
}

void Pacote::setNomeDestinatario(string nomeDestinatario){
    this -> nomeDestinatario = nomeDestinatario;
}

void Pacote::setEnderecoDestinatario(string enderecoDestinatario){
    this -> enderecoDestinatario = enderecoDestinatario;
}

void Pacote::setCidadeDestinatario(string cidadeDestinatario){
    this -> cidadeDestinatario = cidadeDestinatario;
}

void Pacote::setEstadoDestinatario(string estadoDestinatario){
    this -> estadoDestinatario = estadoDestinatario;
}

void Pacote::setCepDestinatario(string cepDestinatario){
    this -> cepDestinatario = cepDestinatario;
}

void Pacote::setNomeRemetente(string nomeRemetente){
    this -> nomeRemetente = nomeRemetente;
}

void Pacote::setEnderecoRemetente(string enderecoRemetente){
    this -> enderecoRemetente = enderecoRemetente;
}

void Pacote::setCidadeRemetente(string cidadeRemetente){
    this -> cidadeRemetente = cidadeRemetente;
}

void Pacote::setEstadoRemetente(string estadoRemetente){
    this -> estadoRemetente = estadoRemetente;
}

void Pacote::setCepRemetente(string cepRemetente){
    this -> cepRemetente = cepRemetente;
}

void Pacote::setPeso(double Peso){
    if(Peso <= 0){
        cout << "ERRO" << endl;
    }
    this -> Peso = Peso;
}

void Pacote::setPrecoKG(double precoKG){
    if(precoKG <= 0){
        cout << "ERRO" << endl;
    }
    this -> precoKG = precoKG;
}

double Pacote::calculaCusto(){
    return this -> Peso * this -> precoKG;
}