#include <iostream>
#include "cilindro.h"

using namespace std;

Cilindro::Cilindro(double base, double altura, double raio)
:Retangulo(base, altura), Circulo(raio){
    setAltura(altura);
    setBase(base);
    setRaio(raio);
}

double Cilindro::calculaArea(){
    double x;
    x = (2 * Circulo::calculaArea()) + Retangulo::calculaArea();
    return x;
}

double Cilindro::calculaVolume(){
    double x;
    x = Retangulo::getAltura() * Circulo::calculaArea();
    return x;
}

void Cilindro::circuloprint(){
    Retangulo::print();
    Circulo::circuloprint();
    cout << "A area eh: " << calculaArea() << endl;
    cout << "O volume eh: " << calculaVolume() << endl;
}