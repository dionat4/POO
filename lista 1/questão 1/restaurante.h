#include <iostream>
#include <string>

#include "empresa.h"

class Restaurante: public Empresa {
private:
    std::string Tipo;
    std::string Preco;

public:

    Restaurante();
    Restaurante(std::string Nome, std::string Endereco, std::string Cidade, std::string Estado, std::string CEP, std::string Telefone, std::string Tipo, std:: string Preco);
    std::string getTipo();
    void setTipo(std::string tipo);

    std::string getPreco();
    void setPreco(std::string preco);

    void printRestaurante();
};