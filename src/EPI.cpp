#include "EPI.h"
#include <string>
#include <iostream>
#include <fstream>

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
    std::string aux3 = Insumo::getDados()
    + std::to_string(tipo) + "\n"
    + descricao;
    return aux3;
}

void EPI::leAtributos(std::ifstream &ArqInsumos)
{
    ArqInsumos >> tipo;
    ArqInsumos >> descricao;
}

void EPI::salvaAtributos(std::ofstream &ArqInsumos)
{
    ArqInsumos << tipo;
    ArqInsumos << descricao;
}
