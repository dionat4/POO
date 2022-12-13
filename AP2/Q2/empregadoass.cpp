#include "empregadoass.h"
#include <iostream>
#include <string>

using namespace std;

EmpregadoAssalariado::EmpregadoAssalariado(string Nome, float Salario): Empregado(Nome){
    setSalario(Salario);
}
void EmpregadoAssalariado::setSalario(float Salario){
    this -> Salario = Salario;
}
float  EmpregadoAssalariado::getSalario(){
    return this -> Salario;
}
float EmpregadoAssalariado::calcularSalario(){
    return this -> getSalario();
}
void EmpregadoAssalariado::print(){
    cout << "Empregado Assalariado========================" << endl;
    cout << "Nome: " << Empregado::getNome() << endl;
    cout << "Salario: " << calcularSalario() << endl;
}