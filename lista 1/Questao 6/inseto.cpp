#include <iostream>
#include <string>
#include "inseto.h"

using namespace std;

Inseto::Inseto(string NomeInseto, bool Venenoso, bool Alado, bool Ferrao) {
    this -> NomeInseto = NomeInseto;      
    this -> Venenoso = Venenoso;
    this -> Alado = Alado;
    this -> Ferrao = Ferrao;   
}

string Inseto::getNomeInseto() {
    return NomeInseto;
}
void Inseto::setNomeInseto(string getNomeInseto) {
    this -> NomeInseto = NomeInseto;
}

bool Inseto::getVenenoso() {
    return Venenoso;
}
void Inseto::setVenenoso(bool Venenoso) {
    this -> Venenoso = Venenoso;
}

bool Inseto::getAlado() {
    return Alado;
}
void Inseto::setAlado(bool Alado) {
    this -> Alado = Alado;
}

bool Inseto::getFerrao() {
    return Ferrao;
}
void Inseto::setFerrao(bool Ferrao) {
    this -> Ferrao = Ferrao;
}

void Inseto::printInseto() {  
    cout << "Nome: " << getNomeInseto() << endl;     
    cout << "Venenoso: " << getVenenoso() << endl;
    cout << "Alado: " << getAlado() << endl;
    cout << "Ferrao: " << getFerrao() << endl;
}