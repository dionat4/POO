#include <iostream>
#include <string>
#include "motor.h"

using namespace std;

class Caminhao: public Veiculo, Motor{
    private: 
        float Tonelada;
        float AlMax;
        float Comprimento;

    public:
        Caminhao();
        Caminhao(float Peso, float VelMax, float Preco, int Cilindro, int Potencia, float Tonelada, float AlMax, float comprimento);
        float getTonelada();
        void setTonelada(float Tonelada);
        float getAlMax();
        void setAlMax(float AlMax);
        float getComprimento();
        void setComprimento(float Compriemnto);


        void printCaminhao();
};