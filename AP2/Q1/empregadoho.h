#ifndef EMPREGADOHO_H
#define EMPREGADOHO_H
#include "empregado.h"
#include <string>
#include <iostream>

using namespace std;

class EmpregadoHorista: public Empregado{
    private:
        float Valor_h;
        int hora;
    public: 
        EmpregadoHorista(string Nome, float Valor_h, int hora);
        float calcularSalario();
        void print();

        void setHora(int hora);
        int getHora();

        void setValor(float Valor_h);
        float getValor();

};

#endif