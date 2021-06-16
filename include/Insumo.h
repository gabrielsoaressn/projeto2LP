#ifndef INSUMO_H
#define INSUMO_H

#include <string>

class Insumo
{
    public:
        Insumo();

        //Metodos Set
        void setNome(std::string n);
        void setQuantidade(int q);
        void setValorUnitario(double v);
        void setDtVencimento(std::string dt);
        void setNomeFabricante(std::string nF);
        void setTipoInsumo(int tI);
        void setAtivo(int ati);

        //Metodos Get
        std::string getNome();
        int getAtivo();
        int getTipoInsumo();
        int getQuantidade();

        virtual std::string getDescricao();
        virtual std::string getDados();
       // virtual void leAtributos(std::ifstream &ArqVacina);

    protected:
        std::string nome;
        int quantidade;
        double valorUnitario;
        std::string dtVencimento;
        std::string nomeFabricante;
        int tipoInsumo; //1 - Vacina 2 - Medicamentos 3 - EPI
        int ativo;

    private:
};

#endif // INSUMO_H
