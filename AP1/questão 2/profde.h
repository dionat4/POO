#ifndef PROFDE_H
#define PROFDE_H
#include "professor.h"
#include <iostream>
#include <string>

class Profde: public Professor{
    private:
        float salario;
    public:
        Profde(string nome, string matricula, int idade, float salario);

        void setSalario(float salario);
        float getSalario();


};

#endif