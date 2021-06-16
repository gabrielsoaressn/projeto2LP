#ifndef LOCAL_H
#define LOCAL_H

#include <string>
#include "Insumo.h"

class Local
{
    public:
        Local();

        //Metodos Get
        std::string getNome();
        int getTipo();

        //Metodos Set
        void setNome(std::string n);
        void setTipo(int t);
        Insumo *insumos[150];
        Insumo getInsumo(int in);


    protected:

    private:
        std::string nome;
        int tipo;




};

#endif // LOCAL_H
