#include <iostream>
#include "corrente.h"
#include "poupanca.h"

using namespace std;

int main(){

    double Taxa = 0.2;

    int Rendimento = 10;

    double Saldo;
    cout << "Saldo Inicial: ";
    cin >> Saldo;

    Poupanca *p = new Poupanca(Saldo, Rendimento);
    p -> calculaRendimento();

    Corrente *c = new Corrente(Saldo, Taxa);
    c -> taxacredito();
    cout << endl;
    c -> taxadebito();
}