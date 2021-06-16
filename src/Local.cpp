#include "Local.h"
#include "Insumo.h"

Local::Local()
{
    int i;
    for(i = 0; i < 150; i++){
        insumos[i] = new Insumo();
    }

    nome = "Nao Cadastrado";
    tipo = 0;
}

std::string Local::getNome(){
    return nome;
}
int Local::getTipo(){
    return tipo;
}

void Local::setNome(std::string n){
    nome = n;
}
void Local::setTipo(int t){
    tipo = t;
}

Insumo Local::getInsumo(int in){
    return *insumos[in];
}
