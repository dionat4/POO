#include "empregadoho.h"
#include <iostream>
#include <string>

using namespace std;

EmpregadoHorista::EmpregadoHorista(string Nome, float Valor_h, int hora): Empregado(Nome){
    setValor(Valor_h);
    setHora(hora);
}

void EmpregadoHorista::setValor(float Valor_h){
    this -> Valor_h = Valor_h;
}
float  EmpregadoHorista::getValor(){
    return this -> Valor_h;
}

void EmpregadoHorista::setHora(int hora){
    this -> hora = hora;
}
int  EmpregadoHorista::getHora(){
    return this -> hora;
}

float EmpregadoHorista::calcularSalario(){
    if(getHora() <= 40){
        return getHora() * getValor();
    }
    if(getHora() > 40){
        return ((40 / getValor()) + (getHora() - 40) * getValor() * 1.5);
    }
    else{
        return 0;
    }
}
void EmpregadoHorista::print(){
    cout << "Empregado Horista========================" << endl;
    cout << "Nome: " << Empregado::getNome() << endl;
    cout << "Horas: " << getHora() << endl;
    cout << "Valor da hora: " << getValor() << endl;
    cout << "Salario: " << calcularSalario() << endl;
}