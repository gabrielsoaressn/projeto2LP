#ifndef PERSISTENCE_H
#define PERSISTENCE_H
#include <fstream>

#include "Controler.h"
#include "Local.h"
#include "Insumo.h"
#include "EPI.h"
#include "Medicamento.h"


class Persistence
{
    public:
        Persistence();
       // virtual ~Persistence();
        void salvarArquivo(Local loc);
        Insumo lerArquivo(Local loc);
    protected:

    private:
};

#endif // PERSISTENCE_H
