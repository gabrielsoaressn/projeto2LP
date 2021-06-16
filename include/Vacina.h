#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"
#include <string>

class Vacina: public Insumo
{
    public:
        Vacina();

        std::string getDescricao();

        //Fun��es set
        void setTipo(std::string ti);
        void setQuantDoses(int qD);
        void setIntervalo(int it);
        std::string getDados();
     //   void leAtributos(std::ifstream &ArqVacina);

    protected:

    private:
        std::string tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
