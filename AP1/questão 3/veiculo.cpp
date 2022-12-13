#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(string nome, double peso, double potencia){
    //this -> nome = nome;
    setPeso(peso);
    setPotencia(potencia);
}

void Veiculo::setPeso(double peso){ 
    this->peso = peso; 
} 
double Veiculo::getPeso() { 
    return this->peso; 
}
void Veiculo::setPotencia(double potencia){ 
    this->potencia = potencia; 
} 
double Veiculo::getPotencia(){ 
    return this->potencia; 
}

void Veiculo::print(){
    cout << "Nome: " << this -> nome << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Potencia: " << getPotencia() << endl;
}