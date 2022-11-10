/*Crie classes Humano, Inseto e SuperHeroi. A classe Humano possui atributos NomeHumano, Sexo, Idade,
Lingua e Etnia. A classe Inseto possui atributos NomeHumano, Venenoso, Alado, Ferrao (os três últimos são
booleanos). A classe SuperHeroi herda das duas classes anteriores, e adiciona os atributos CodiNomeHumano,
Trauma e Poderes. Todos os atributos possuem getters e setters. Crie a hierarquia de herança múltipla,
um construtor e um método print na classe derivada. Crie um driver para testar sua hierarquia.
*/
#include <iostream>
#include <string>

using namespace std;

class Humano {
private:
    string NomeHumano;
    string Sexo;
    int Idade;
    string Lingua;
    string Etnia;

public:
    Humano(string NomeHumano, string Sexo, int Idade, string Lingua, string Etnia);

    string getNomeHumano();
    void setNomeHumano(string NomeHumano);

    string getSexo();
    void setSexo(string Sexo);

    int getIdade();
    void setIdade(int Idade);

    string getLingua();
    void setLingua(string Lingua);

    string getEtnia(); 
    void setEtnia(string Etnia);

    void printHumano();
    
};