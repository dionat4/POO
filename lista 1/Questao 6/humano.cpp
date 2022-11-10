#include <iostream>
#include <string>
#include "humano.h"

using namespace std;

Humano::Humano(string NomeHumano, string Sexo, int Idade, string Lingua, string Etnia) {
    this->NomeHumano = NomeHumano;
    this->Sexo = Sexo;
    this->Idade = Idade;
    this->Lingua = Lingua;
    this->Etnia = Etnia;
}

string Humano::getNomeHumano() {
    return NomeHumano;
}
void Humano::setNomeHumano(string NomeHumano) {
    this-> NomeHumano = NomeHumano;
}

string Humano::getSexo() {
    return Sexo;
}
void Humano::setSexo(string Sexo) {
    this -> Sexo = Sexo;
}

int Humano::getIdade() {
    return Idade;
}
void Humano::setIdade(int Idade) {
    this -> Idade = Idade;
}

string Humano::getLingua() {
    return Lingua;
}
void Humano::setLingua(string Lingua) {
    this->Lingua = Lingua;
}

string Humano::getEtnia() {
    return Etnia;
}
void Humano::setEtnia(string Etnia) {
    this->Etnia = Etnia;
}

void Humano::printHumano() {   
    cout << "NomeHumano: " << getNomeHumano() << endl;
    cout << "Sexo: " << getSexo() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Lingua: " << getLingua() << endl;
    cout << "Etnia: " << getEtnia() << endl;
}