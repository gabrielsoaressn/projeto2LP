#include "Persistence.h"
#include <iostream>
#include <string>
#include <fstream>

#include "Local.h"
#include "Vacina.h"

Persistence::Persistence()
{
    //ctor
}
/*
Persistence::~Persistence()
{
    //dtor
}*/

void Persistence::salvarArquivo(Local loc)
{
    int i=0, j;
    std::ofstream ArqInsumos;

    ArqInsumos.open("insumos.txt", std::fstream::out);
    if(!ArqInsumos.is_open()){
        std::cout<<"n foi possivel abrir o arquivo"<<std::endl;
        return;
        }
        for(i=0;i<150;i++){
            if(loc.insumos[i]->getAtivo() == 1){
                    ArqInsumos << loc.insumos[i]->getDados()<<std::endl;

                }if(loc.insumos[i]->getAtivo() == 0){
                    break;
                }
            }
    std::cout <<"salvo com sucesso "<< std::endl;
    ArqInsumos.close();
    return;
}

Insumo Persistence::lerArquivo(Local loc)
{
    //Variaveis utility
    int i, ati, tip;

    //Variaveis de Gerais dos Insumos
    std::string n;
    int q;
    double v;
    std::string dt;
    std::string nF;


    std::ifstream ArqInsumos;
    ArqInsumos.open ("insumos.txt",std::fstream :: in);
    if(!ArqInsumos.is_open()){
        std::cout<<"n foi possivel abrir o arquivo"<<std::endl;
    }


    while(1)
    {
        if(ArqInsumos.eof()||ArqInsumos.bad())
            break;
        Vacina *ins;
        ArqInsumos >> tip;
        ArqInsumos >> ati;

        if(ati==0)
        {
            break;
        }
        if(ati==1)
        {
            switch (tip)
        {
        case 0:
        {
            break;
        }
        case 1:

        {   std::cout<<"novo obj tipovacina"<<std::endl;
            ins = new Vacina();
            loc.insumos[i] = new Vacina();

            ins->setTipoInsumo(tip);
            ins->setAtivo(ati);

            ArqInsumos >> n;
            ins->setNome(n);
            ArqInsumos >> q;
            ins->setQuantidade(q);
            ArqInsumos >> v;
            ins->setValorUnitario(v);
            ArqInsumos >> dt;
            ins->setDtVencimento(dt);
            ArqInsumos >> nF;
            ins->setNomeFabricante(nF);

            // exclusivas de vacina
            ins->leAtributos(ArqInsumos);

            *loc.insumos[i] = *ins;

        }
        }

        }i++;
    }
    ArqInsumos.close();
/*
    for(i=0;i<150;i++){
        if(loc.insumos[i]->ativo==1){

            std::cout<<loc.insumos[i]->nome<<std::endl;
        }
    }
  */
    return *loc.insumos[149];
}
