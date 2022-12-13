#include <iostream>
#include <string>
#include "profh.h"

using namespace std;

Profh::Profh(string nome, string matricula, int idade, int t_horas, float salario_h)
:Professor(nome, matricula, idade){
    setT_horas(t_horas);
    setSalario_h(salario_h);
}

void Profh::setT_horas(int t_horas){ 
    this->t_horas = t_horas;
} 
int Profh::getT_horas(){ 
    return this->t_horas; 
}
void Profh::setSalario_h(float salario_h) { 
    this->salario_h = salario_h; 
} 
float Profh::getSalario_h() { 
    return this->salario_h;
}