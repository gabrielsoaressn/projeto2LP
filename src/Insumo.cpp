#include "Insumo.h"
#include <string>
#include <iostream>
#include <string>

Insumo::Insumo()
{
         nome = "Nao cadastrado";
         quantidade = 0;
         valorUnitario = 0.0;
         dtVencimento = "00/00/0000";
         nomeFabricante = "Nao cadastrado";
         tipoInsumo = 0;
         ativo = 0;
}

void Insumo::setNome(std::string n){
    nome = n;
}

void Insumo::setQuantidade(int q){
    quantidade = q;
}

void Insumo::setValorUnitario(double v){
    valorUnitario = v;
}

void Insumo::setDtVencimento(std::string dt){
    dtVencimento = dt;
}

void Insumo::setNomeFabricante(std::string nF){
    nomeFabricante = nF;
}

void Insumo::setTipoInsumo(int tI){
    tipoInsumo = tI;
}
void Insumo::setAtivo(int ati){
    ativo = ati;
}

int Insumo::getAtivo(){
    return ativo;
}

int Insumo::getTipoInsumo(){
    return tipoInsumo;
}

int Insumo::getQuantidade(){
    return quantidade;
}

std::string Insumo::getNome(){
    return nome;
}

std::string Insumo::getDescricao(){

    std::string desc = "Nome: " + nome + "\nQuantidade: " + std::to_string(quantidade) + "\nValor Unitario: R$ " + std::to_string(valorUnitario) + "\nData de Vencimento: " + dtVencimento + "\nNome do Fabricante:" + nomeFabricante + "\n";
    return desc;
}

std::string Insumo::getDados(){

    std::string desc = std::to_string(tipoInsumo) + "\n"
    +std::to_string(ativo)+ "\n"
    + nome + "\n"
    + std::to_string(quantidade) + "\n"
    + std::to_string(valorUnitario) + "\n"
    + dtVencimento + "\n" + nomeFabricante +"\n";
    return desc;
}

void Insumo::leAtributos(std::ifstream &ArqInsumos)
{

}
