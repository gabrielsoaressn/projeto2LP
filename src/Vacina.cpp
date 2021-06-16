#include "Vacina.h"
#include <string>
#include <iostream>

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
    std::string desc = tipo + "\n"
    +  std::to_string(quantDoses) + "\n"
    +  std::to_string(intervalo) + "\n";
    return desc;
}
/*
void Vacina::leAtributos(std::ifstream &ArqInsumos)
{
    ArqInsumos >> tipo;
    ArqInsumos >> quantDoses;
    ArqInsumos >> intervalo;
}
*/
