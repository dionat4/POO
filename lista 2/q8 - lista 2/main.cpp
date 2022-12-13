/*Crie uma classe Estacionamento para armazenar dados de um estacionamento. Os
atributos devem representar a placa e modelo do carro além da hora de entrada e saída
do estacionamento. Utilize dois objetos da classe Tempo criada no exercício anterior. Crie
métodos para:
(a) Funcionar como getter e setter;
(b) Inicializar os dados com vazio ou zero;
(c) Imprimir os dados de um carro estacionado;
(d) Calcular e retornar o valor a ser pago pelo carro estacionado. Considere o preço
de R$1,50 por hora. Utilize o método da classe Tempo.
Crie um vetor de 5 posições e preencha-o para testar sua classe.
*/
#include <iostream>
#include <string>
#include "estacionamento.h"

using namespace std;

int main(){
    Estacionamento *carros = new Estacionamento[5];
    Tempo *saiu = new Tempo[5];
    Tempo *entrou = new Tempo[5];

    for(int i = 0; i < 5; i++){

        string placa;
        cout << "Placa: ";
        cin >> placa;

        cin.ignore();
        string modelo;
        cout << "Modelo: ";
        cin >> modelo;

        //Hora da entrada
        int hora1;
        cout << "Hora de entrada: ";
        cin >> hora1;

        int minuto1;
        cout << "Minuto da entrada: ";
        cin >> minuto1;

        int segundo1;
        cout << "Segundo da entrada: ";
        cin >> segundo1;

        //Hora de saida
        int hora2;
        cout << "Hora da saída: ";
        cin >> hora2;

        int minuto2;
        cout << "Minuto da saida: ";
        cin >> minuto2;

        int segundo2;
        cout << "Segundo da saida: ";
        cin >> segundo2;

        carros[i].setPlaca(placa);
        carros[i].setModelo(modelo);

        entrou[i].sethr(hora1);
        entrou[i].setmin(minuto1);
        entrou[i].setmin(segundo1);

        saiu[i].sethr(hora2);
        saiu[i].setmin(minuto2);
        saiu[i].setseg(segundo2);

        cin.ignore();
    }

    for(int i = 0; i < 5; i++){
      Tempo aux(saiu[i] - entrou[i]);
      carros[i].printCarro(aux);
   }
}