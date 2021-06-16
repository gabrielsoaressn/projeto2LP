#include "Vacina.h"
#include <string>
#include <iostream>
#include <fstream>

Vacina::Vacina(): Insumo()
{
        tipoInsumo = 1;
        tipo = "Não Cadastrado";
        quantDoses = 0;
        intervalo = 0;
        ativo = 0;

}
void Vacina::setTipo(std::string ti){
    tipo = ti;
}
void Vacina::setQuantDoses(int qD){
    quantDoses = qD;
}
void Vacina::setIntervalo(int it){
    intervalo = it;
}

std::string Vacina::getDescricao(){

    std::string aux = Insumo::getDescricao() + "\n"
    + "Tipo  de Vacina: " + tipo
    + "\nQuantidade de Doses: "
    + std::to_string(quantDoses)
    + " doses\nIntervalo: " + std::to_string(intervalo) + " mes(es)." + "\n";
    return aux;
}

std::string Vacina::getDados()
{
    std::string aux = Insumo::getDados() + tipo + "\n"
    +  std::to_string(quantDoses) + "\n"
    +  std::to_string(intervalo);
    return aux;
}

void Vacina::leAtributos(std::ifstream &ArqInsumos)
{
    ArqInsumos >> tipo;
    ArqInsumos >> quantDoses;
    ArqInsumos >> intervalo;
}

void Vacina::salvaAtributos(std::ofstream &ArqInsumos)
{
    ArqInsumos << tipo;
    ArqInsumos << quantDoses;
    ArqInsumos << intervalo;
}
