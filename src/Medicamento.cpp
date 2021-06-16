#include "Medicamento.h"
#include <string>
#include <iostream>

Medicamento::Medicamento()
{
        tipoInsumo = 2;
        administracao = "Nao cadastrado";
        dosagem = "Nao cadastrado";
        disponibilizacao = "Nao cadastrado";
        ativo = 0;
}

std::string Medicamento::getDescricao(){

    std::string aux = Insumo::getDescricao() + "\n" + "Tipo  de Administracao: " + administracao + "\nDosagem: " + dosagem + " ml.\nDisponibilizacao: " + disponibilizacao + "\n";
    return aux;
}

void Medicamento::setAdministracao(std::string adm){
    administracao = adm;
}
void Medicamento::setDosagem(std::string dos){
    dosagem = dos;
}
void Medicamento::setDisponibilizacao(std::string disp){
    disponibilizacao = disp;
}

std::string Medicamento::getDados()
{
    std:: string aux = Insumo::getDados()+ "\n" +
    administracao + "\n"
    + dosagem;
    return aux;
}
