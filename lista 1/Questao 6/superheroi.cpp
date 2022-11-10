#include <iostream>
#include <string>
#include "superheroi.h"

using namespace std; 

SuperHeroi::SuperHeroi(string NomeHumano, string Sexo, int Idade, string Lingua, string Etnia, string NomeInseto, bool Venenoso, bool Alado, bool Ferrao, 
string CodiNome, string Traumas, string Poderes):Humano(NomeHumano, Sexo, Idade, Lingua, Etnia), Inseto(NomeInseto, Venenoso, Alado, Ferrao) {
    this -> CodiNome = CodiNome;
    this -> Traumas = Traumas;
    this -> Poderes = Poderes;
}

string SuperHeroi::getCodiNome() {
    return CodiNome;
}
void SuperHeroi::setCodiNome(string CodiNome) {
    this -> CodiNome = CodiNome;
}
string SuperHeroi::getTraumas() {
    return Traumas;
}
void SuperHeroi::setTraumas(string Traumas) {
    this -> Traumas = Traumas;
}

string SuperHeroi::getPoderes() {
    return Poderes;
}
void SuperHeroi::setPoderes(string Poderes) {
    this -> Poderes = Poderes;
}

void SuperHeroi::printSuperHeroi() {
    Humano::printHumano();
    Inseto::printInseto();
    cout << "CodiNome: " << getCodiNome() << endl;
    cout << "Traumas: " << getTraumas() << endl;
    cout << "Poderes: " << getPoderes() << endl;
}