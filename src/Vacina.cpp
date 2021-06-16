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

    std::string aux = Insumo::getDescricao() + "\n" + "Tipo  de Vacina: " + tipo + "\nQuantidade de Doses: " + std::to_string(quantDoses) + " doses\nIntervalo: " + std::to_string(intervalo) + " mes(es)." + "\n";
    return aux;
}

void Vacina::leAtributos(std::ifstream &ArqInsumos)
{
    ArqInsumos >> tipo;
    ArqInsumos >> quantDoses;
    ArqInsumos >> intervalo;
}
