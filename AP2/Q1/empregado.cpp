#include "empregado.h"
#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(string Nome){
    setNome(Nome);
}

void Empregado::setNome(string Nome){
    this -> Nome = Nome;
}
string  Empregado::getNome(){
    return this -> Nome;
}

void Empregado::print(){
    cout << getNome() << endl;
}

