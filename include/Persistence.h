#ifndef PERSISTENCE_H
#define PERSISTENCE_H

#include <fstream>

#include "Local.h"
#include "Insumo.h"
#include "Controler.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"


class Persistence
{
    public:
        Persistence();

        void salvarArquivo(Controler c1);
       // Insumo lerArquivo(Controler c1);
    protected:

    private:
};

#endif // PERSISTENCE_H
