#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
#include <iostream>

using namespace std;

class Empregado{
    private:
        string Nome;
    public: 
        Empregado(string Nome);
        virtual float calcularSalario() = 0;
        virtual void print();

        void setNome(string Nome);
        string getNome();
};

#endif