#include <iostream>
#include <string>
#include "pacotedoisdias.h"
#include "pacoteovernight.h"

using namespace std;

int main(){
    double Peso, PrecoKG, taxa;

    cout << "Peso: ";
    cin >> Peso;

    cout << "Preco por quilo: ";
    cin >> PrecoKG;

    cout << "Taxa: ";
    cin >> taxa;

    Pacote *pacote = new Pacote ("a", "b", "c", "d", "e", "f", "g", "h", "i", "j", Peso, PrecoKG);
    cout << "Custo é de: " << pacote -> calculaCusto() << endl;

    PacoteDoisDias *night = new PacoteDoisDias ("a", "b", "c", "d", "e", "f", "g", "h", "i", "j", Peso, PrecoKG, taxa);
    cout << "Custo é de: " << night -> calculaCusto() << endl;

    PacoteOverNight *dois = new PacoteOverNight ("a", "b", "c", "d", "e", "f", "g", "h", "i", "j", Peso, PrecoKG, taxa);
    cout << "Custo é de: " << dois -> calculaCusto() << endl;
}0