#ifndef PROFH_H
#define PROFH_H
#include "professor.h"
#include <iostream>
#include <string>

class Profh: public Professor{
    private: 
        int t_horas;
        float salario_h;
    public:
        Profh(string nome, string matricula, int idade, int t_horas, float salario_h);

        void setT_horas(int t_horas);
        int getT_horas();
        void setSalario_h(float salario_h); 
        float getSalario_h();
};

#endif