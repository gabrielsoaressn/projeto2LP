#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"
#include <string>

class Vacina: public Insumo
{
    public:
        Vacina();

        std::string getDescricao();

        //Funções set
        void setTipo(std::string ti);
        void setQuantDoses(int qD);
        void setIntervalo(int it);
        void leAtributos(std::ifstream &ArqInsumos);

    protected:

    private:
        std::string tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
