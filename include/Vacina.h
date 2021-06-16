#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"
#include <string>
#include <fstream>

class Vacina: public Insumo
{
    public:
        Vacina();

        std::string getDescricao();

        //Funções set
        void setTipo(std::string ti);
        void setQuantDoses(int qD);
        void setIntervalo(int it);
        std::string getDados();
        void leAtributos(std::ifstream &ArqVacina);
        void salvaAtributos(std::ofstream &ArqVacina);

    protected:

    private:
        std::string tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
