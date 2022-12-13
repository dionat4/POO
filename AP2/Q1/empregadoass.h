#ifndef EMPREGADOASS_H
#define EMPREGADOASS_H
#include "empregado.h"
#include <string>
#include <iostream>

using namespace std;

class EmpregadoAssalariado: public Empregado{
    private:
        float Salario;
    public: 
        EmpregadoAssalariado(string Nome, float Salario);
        float calcularSalario();
        void print();

        void setSalario(float Salario);
        float getSalario();
};

#endif