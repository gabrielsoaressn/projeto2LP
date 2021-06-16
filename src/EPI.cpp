#include "EPI.h"
#include <string>
#include <iostream>

EPI::EPI()
{
    tipoInsumo = 3;
    tipo = 0;
    descricao = "Sem descricao";
    ativo = 0;
}

std::string EPI::getDescricao(){

    std::string aux = Insumo::getDescricao() + "\n" + "Tipo  de EPI: "
    + std::to_string(tipo) + "\nDescricao: " + descricao + "\n";
    return aux;
}

void EPI::setTipo(int t){
    tipo = t;
}
void EPI::setDescricao(std::string desc){

    descricao = desc;
}

std::string EPI::getDados()
{
    std::string desc =  tipo + "\n"
    + descricao + "\n";
    return desc;
}
/*
void EPI::leAtributos(std::ifstream &ArqInsumos)
{
    ArqInsumos >> tipo;
    ArqInsumos >> descricao;
}
*/
