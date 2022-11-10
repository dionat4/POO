#include <iostream>
#include <string>

using namespace std;

class Inseto {
private:
    string NomeInseto;
    bool Venenoso;
    bool Alado;
    bool Ferrao;

public:
    Inseto(string NomeInseto, bool Venenoso, bool Alado, bool Ferrao);

    string getNomeInseto();
    void setNomeInseto(string NomeInseto);

    bool getVenenoso();
    void setVenenoso(bool Venenoso);

    bool getAlado();
    void setAlado(bool Alado);

    bool getFerrao();
    void setFerrao(bool Ferrao);
    
    void printInseto();

};