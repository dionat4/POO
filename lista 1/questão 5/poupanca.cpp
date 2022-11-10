#include "poupanca.h"
#include <iostream>
#include <string>

using namespace std;

Poupanca::Poupanca(double Saldo, int Rendimento):Conta(Saldo) {
    this -> Rendimento = Rendimento;
}


void Poupanca::setRendimento(int Rendimento) {
    this -> Rendimento = Rendimento;
}

int Poupanca::getRendimento() {
    return Rendimento;
}


void Poupanca::calculaRendimento(){
    double retorno = Conta::getSaldo() * getRendimento();
    cout << "O valor do redimento: " << retorno << endl;
    cout << "========================================================" << endl;
}