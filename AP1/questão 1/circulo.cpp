#include <iostream>
#include "circulo.h"

using namespace std;

Circulo::Circulo(double raio){
    setRaio(raio);
}

void Circulo::setRaio(double raio){ 
    this->raio = raio;
} 
double Circulo::getRaio(){
    return this->raio; 
}

double Circulo::calculaArea(){
    double x;
    x = 3.14 * (getRaio() * getRaio());
    return x;
}

double Circulo::calculaPerimetro(){
    double x;
    x = 2*3.14*getRaio();
    return x;
}

void Circulo::circuloprint(){
    cout << "A area eh: " << calculaArea() << endl;
    cout << "O perimetro eh: " << calculaPerimetro() << endl;
    cout << " ================================================= " << endl;
}