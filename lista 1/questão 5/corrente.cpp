#include <iostream>
#include "corrente.h"

using namespace std;

Corrente::Corrente(double Saldo, double Taxa): Conta(Saldo){
    this -> Taxa = Taxa;
}

void Corrente::setaxa(double Taxa){
    this -> Taxa = Taxa;
}
double Corrente::getaxa(){
    return Taxa;
}

void Corrente::taxacredito(){
    Conta::mostraCredito();
    double a = Conta::getSaldo() * getaxa();
    if(a > 0){
        cout << "Valor taxado: " << a << endl;
        Conta::setSaldo(a);
    }
    else{
        cout << "Nao foi possivel taxar" << endl;
    }
}

void Corrente::taxadebito(){
    Conta::mostraDebito();
    double x = Conta::getSaldo() * getaxa();
    cout  << x << endl;
    if(x > 0){
        cout << "Valor taxado: " << x << endl;
        Conta::setSaldo(x);
    }
    else{
        cout << "Nao foi possivel taxar" << endl;
    }
}

