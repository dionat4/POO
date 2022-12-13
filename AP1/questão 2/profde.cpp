#include <iostream>
#include <string>
#include "profde.h"

using namespace std;

Profde::Profde(string nome, string matricula, int idade, float salario)
:Professor(nome, matricula, idade){
    setSalario(salario);
}

void Profde::setSalario(float salario){ 
    this->salario = salario; 
} 
float Profde::getSalario() {
     return this->salario; 
}
