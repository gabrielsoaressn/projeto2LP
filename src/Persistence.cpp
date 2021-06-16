#include "Persistence.h"
#include <iostream>
#include <string>
#include <fstream>
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
                        if(c1.getLocais(j)->insumos[i]->getAtivo() == 1){

                            ArqInsumos << c1.getLocais(j)->insumos[i]->getDados() << std::endl;
                            c1.getLocais(j)->insumos[i]->setAtivo(0);
                            continue;
                            }
                        }

                    }




        ArqInsumos.close();
}


Insumo *Persistence::lerArquivo(Controler c1)
{
    //Variaveis utility
    int i=0, ati, tipI, j=0;

    //Variaveis de Gerais dos Insumos
    std::string n;
    int q;
    double v;
    std::string dt;
    std::string nF;

    //Variaveis da Vacina
    std::string ti;
    int qD;
    int it;

    //Variaveis de Medicamento
    std::string adm;
    std::string dosagem;
    std::string dispo;

    //Variaveis de EPI
    int tip;
    std::string descri;

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
        ArqInsumos >> tipI;

        switch (tipI)
        {
        case 0:
        {
            break;
        }
        case 1:

        {
            vac = new Vacina();

            vac->setTipoInsumo(tipI);

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
            ArqInsumos >> ti;
            vac->setTipo(ti);
            ArqInsumos >> qD;
            vac->setQuantDoses(qD);
            ArqInsumos >> it;
            vac->setIntervalo(it);

            c1.getLocais(j)->insumos[i] = vac;
            i++;
            break;

        }case 2:

        {
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

            // exclusivas de medicamento
            ArqInsumos >> adm;
            med->setAdministracao(adm);
            ArqInsumos >> dosagem;
            med->setDosagem(dosagem);
            ArqInsumos >> dispo;
            med->setDisponibilizacao(dispo);

            //c1.getLocais(j)->insumos[i] = med;
            i++;
            break;
        }
        case 3:

        {
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
            ArqInsumos >> tip;
            epi->setTipo(tip);
            ArqInsumos >> descri;
            epi->setDescricao(descri);

            c1.getLocais(j)->insumos[i] = epi;
            i++;

            break;
        }
        }

        }

    ArqInsumos.close();

    return c1.getLocais(0)->insumos[149];
}

