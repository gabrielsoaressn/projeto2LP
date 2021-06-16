#include "Persistence.h"
#include <iostream>
#include <string>
#include "Local.h"
#include "Controler.h"

Persistence::Persistence()
{
    //ctor
}

void Persistence::salvarArquivo(Controler c1)
{
        int i, j;
            std::ofstream ArqInsumos;
                ArqInsumos.open("insumos.txt", std::fstream::out);
                    if(!ArqInsumos.is_open()){
                        std::cout<<"n foi possivel abrir o arquivo"<<std::endl;
                            return;
                    }
                for(j=0;j<=28;j++){
                    for(i = 0; i<150; i++)
                    {
                        if(c1.getLocais(j)->insumos[i]->getTipoInsumo() == 1||c1.getLocais(j)->insumos[i]->getTipoInsumo() == 2||c1.getLocais(j)->insumos[i]->getTipoInsumo() == 3){

                            ArqInsumos << c1.getLocais(j)->insumos[i]->getDescricao() << std::endl;
                            }
                        if(c1.getLocais(j)->insumos[i]->getAtivo()==0){
                            break;
                        }

                    }
                }


        ArqInsumos.close();
}

/*
Insumo Persistence::lerArquivo(Controler c1)
{
    //Variaveis utility
    int i, ati, tip, j;

    //Variaveis de Gerais dos Insumos
    std::string n;
    int q;
    double v;
    std::string dt;
    std::string nF;

    Vacina *vac;
    Medicamento *med;
    EPI *epi;

    std::ifstream ArqInsumos;
    ArqInsumos.open ("insumos.txt",std::fstream :: in);
    if(!ArqInsumos.is_open()){
        std::cout<<"n foi possivel abrir o arquivo"<<std::endl;
    }


    while(1)
    {
        if(ArqInsumos.eof()||ArqInsumos.bad())
            break;
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
            vac = new Vacina();

            vac->setTipoInsumo(tip);
            vac->setAtivo(ati);

            ArqInsumos >> n;
            vac->setNome(n);
            ArqInsumos >> q;
            vac->setQuantidade(q);
            ArqInsumos >> v;
            vac->setValorUnitario(v);
            ArqInsumos >> dt;
            vac->setDtVencimento(dt);
            ArqInsumos >> nF;
            vac->setNomeFabricante(nF);

            // exclusivas de vacina
            vac->leAtributos(ArqInsumos);

            c1.getLocais(j)->insumos(i) = *vac;
            i++;
            break;

        }case 2:

        {   std::cout<<"novo obj tipo med"<<std::endl;
            med = new Medicamento();

            med->setTipoInsumo(tip);
            med->setAtivo(ati);

            ArqInsumos >> n;
            med->setNome(n);
            ArqInsumos >> q;
            med->setQuantidade(q);
            ArqInsumos >> v;
            med->setValorUnitario(v);
            ArqInsumos >> dt;
            med->setDtVencimento(dt);
            ArqInsumos >> nF;
            med->setNomeFabricante(nF);

            // exclusivas de vacina
            med->leAtributos(ArqInsumos);

            c1.getLocais(j)->insumos(i) = *med;
            i++;
            break;
        }
        case 3:

        {   std::cout<<"novo obj tipo med"<<std::endl;
            epi = new EPI();

            epi->setTipoInsumo(tip);
            epi->setAtivo(ati);

            ArqInsumos >> n;
            epi->setNome(n);
            ArqInsumos >> q;
            epi->setQuantidade(q);
            ArqInsumos >> v;
            epi->setValorUnitario(v);
            ArqInsumos >> dt;
            epi->setDtVencimento(dt);
            ArqInsumos >> nF;
            epi->setNomeFabricante(nF);

            // exclusivas de vacina
            epi->leAtributos(ArqInsumos);

            c1.getLocais(j)->insumos(i) = *vac;
            i++;
            break;
        }
        }

        }
    }
    ArqInsumos.close();

    return c1.getLocais(j)->insumos[149];
}
*/
