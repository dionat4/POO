#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>


using namespace std;

class Aluno {
    private:
        string nome;
        int serie, grau;
    public:
        Aluno() = default;
        Aluno(string nome, int serie, int grau);
        ~Aluno();

        void setNome(string nome);
        void setSerie(int serie);
        void setGrau(int grau);

        string getNome();
        int getSerie();
        int getGrau();
};
#endif
