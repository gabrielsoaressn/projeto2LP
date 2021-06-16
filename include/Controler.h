#ifndef CONTROLER_H
#define CONTROLER_H

#include "Local.h"


class Controler
{
    public:
        Controler();

        void cadastraInsumosMs(Insumo *ins);
        void consultaInsumosMS();
        Local verificaEstado(std::string est);
        void consultaInsumosPorLocal(Local loc);
        void consultaInsumosDescricao(Local loc);
        void consultaInsumosPorTipo(Local loc, int tipoInsumo);
        void distribuiInsumo(Local dest, std::string nomeDoInsumo);

        Local *getLocais(int i);



        int nInsumos;

    protected:

    private:
        Local locais[28];

};

#endif // CONTROLER_H
