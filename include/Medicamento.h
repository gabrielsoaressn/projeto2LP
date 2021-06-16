#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <string>
#include "Insumo.h"
#include <iostream>
#include <fstream>

class Medicamento: public Insumo
{
    public:
        Medicamento();

        std::string getDescricao();
        std::string getDados();

        void setAdministracao(std::string adm);
        void setDosagem(std::string dos);
        void setDisponibilizacao(std::string disp);
        void leAtributos(std::ifstream &ArqVacina);
        void salvaAtributos(std::ofstream &ArqVacina);

    protected:

    private:
        std::string administracao;
        std::string dosagem;
        std::string disponibilizacao;
};

#endif // MEDICAMENTO_H
