#include <iostream>
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(double base, double altura){
    setBase(base);
    setAltura(altura);
}

void Retangulo::setBase(double base){
     this -> base = base; 
} 
double Retangulo::getBase(){ 
    return base; 
}
void Retangulo::setAltura(double altura){ 
    this -> altura = altura; 
} 
double Retangulo::getAltura() { 
    return altura; 
}

double Retangulo::calculaArea(){
    double x;
    x = getBase() * getAltura();
    return x;
}

double Retangulo::calculaPerimetro(){
    double x;
    x = (getBase() * 2) + (getAltura() * 2);
    return x;
}

void Retangulo::print(){
    cout << "A area eh: " << calculaArea() << endl;
    cout << "O perimetro eh: " << calculaPerimetro() << endl;
    cout << " ================================================= " << endl;
}