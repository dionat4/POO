#include<iostream>
#include "conta.h"

using namespace std;

Conta::Conta(double Saldo){
    setSaldo(Saldo);
}

void Conta::setSaldo(double Saldo){
    this -> Saldo = Saldo;
}

double Conta::getSaldo(){
    return Saldo;
}

void Conta::mostraCredito(){
    double Credito;
    cout << "Quanto de credito voce quer inserir? ";
    cin >> Credito;
    setSaldo(Credito + this -> Saldo);
}


void Conta::mostraDebito(){
    double Debito;
    cout << "Quanto voce quer sacar? ";
    cin >> Debito;
    if(Debito > this -> Saldo){
        cout << "Saque indisponivel!" << endl;
        return;
    }
    else{
        setSaldo(this -> Saldo - Debito);
    }
}