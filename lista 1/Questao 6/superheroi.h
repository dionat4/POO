#include <iostream>
#include <string>
#include "humano.h"
#include "inseto.h"

using namespace std; 

class SuperHeroi: public Humano, public Inseto {
private:
    string CodiNome;
    string Traumas;
    string Poderes;

public: 
    SuperHeroi(string NomeHumano, string Sexo, int Idade, string Lingua, string Etnia, string NomeInseto, bool Venenoso, bool Alado, bool Ferrao, 
    string CodiNome, string Traumas, string Poderes);

    string getCodiNome();
    void setCodiNome(string CodiNome);

    string getTraumas();
    void setTraumas(string Traumas);

    string getPoderes();
    void setPoderes(string Poderes);

    void printSuperHeroi();
};

