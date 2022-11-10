#include <iostream>
#include <string>
#include "caminhao.h"

using namespace std;

int main(){
    float Peso;
    float VelMax;
    float Preco;
    int Cilindro;
    int Potencia;
    float Tonelada;
    float AlMax;
    float Comprimento;
    cout << "Peso: " << endl;
    cin >> Peso;
    cout << "Velocidade maxima: " << endl;
    cin >> VelMax;
    cout << "Preco: " << endl;
    cin >> Preco;
    cout << "Cilindro: " << endl;
    cin >> Cilindro;
    cout << "Potencia:  " << endl;
    cin >> Potencia;
    cout << "Tonelada:  " << endl;
    cin >> Tonelada;
    cout << "Altura Maxima: " << endl;
    cin >> AlMax;
    cout << "Comprimento: " << endl;
    cin >> Comprimento;
    Caminhao *a = new Caminhao(Peso, VelMax, Preco, Cilindro, Potencia, Tonelada, AlMax, Comprimento);
    cout << "======================================" << endl;
    a -> printCaminhao();

    return 0;
}