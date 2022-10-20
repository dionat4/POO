#include <iostream>
#include <string>
#ifndef PACOTE_H
#define PACOTE_H

using namespace std;

class Pacote{
    protected:
        string nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente;
        float Peso, precoKG;
    public:
        Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente, float Peso, float precoKG);

        void setNomeDestinatario(string nomeDestinatario);
        void setEnderecoDestinatario(string enderecoDestinatario);
        void setCidadeDestinatario(string cidadeDestinatario);
        void setEstadoDestinatario(string estadoDestinatario);
        void setCepDestinatario(string cepDestinatario);
        void setNomeRemetente(string nomeRemetente);
        void setEnderecoRemetente(string enderecoRemetente);
        void setCidadeRemetente(string cidadeRemetente);
        void setEstadoRemetente(string estadoRemetente);
        void setCepRemetente(string cepRemetente);
        void setPeso(double Peso);
        void setPrecoKG(double precoKG);

        double calculaCusto();
};

#endif