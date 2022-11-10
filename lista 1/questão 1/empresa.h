#include <iostream>
#include <string>

class Empresa{
    private:
        std::string Nome, Endereco, Cidade, Estado, CEP, telefone;
    public:
        Empresa();
        Empresa(std::string Nome, std::string Endereco, std::string Cidade, std::string Estado, std::string CEP, std::string Telefone);
        std::string getNome();
        void setNome(std::string Nome);

        std::string getEndereco();
        void setEndereco(std::string Endereco);

        std::string getCidade();
        void setCidade(std::string Cidade);

        std::string getEstado();
        void setEstado(std::string Estado);

        std::string getCEP();
        void setCEP(std::string CEP);

        std::string getelefone();
        void setelefone(std::string Telefone);

        void print();
};