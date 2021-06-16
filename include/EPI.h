#ifndef EPI_H
#define EPI_H
#include "Insumo.h"
#include <string.h>
#include <fstream>

class EPI: public Insumo
{
    public:
        EPI();

        std::string getDescricao();

        void setTipo(int t);
        void setDescricao(std::string desc);
        std::string getDados();
        void leAtributos(std::ifstream &ArqVacina);
        void salvaAtributos(std::ofstream &ArqVacina);

    protected:

    private:
        int tipo;
        std::string descricao;

};

#endif // EPI_H
