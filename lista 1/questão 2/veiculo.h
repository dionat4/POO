#include <iostream>
#include <string>

using namespace std;

class Veiculo{
    private:
        //Atributos
        float Peso;
        float VelMax;
        float Preco;
    public:
        //Construtores sem e com parâmetros 
        Veiculo();
        Veiculo(float Peso, float VelMax, float Preco);
        //prototipos dos métodos get e set
        float getPeso();
        void setPeso(float Peso);
        float getVelMax();
        void setVelMax(float VelMax);
        float getPreco();
        void setPreco(float Preco);

        void print();//Função para imprimir
};