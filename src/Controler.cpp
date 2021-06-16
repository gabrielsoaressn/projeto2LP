#include "Controler.h"
#include "Vacina.h"
#include <iostream>
#include <string>
#include "Medicamento.h"
#include "EPI.h"


Controler::Controler()
{
    int i, j;

    locais[0].setNome("Ms");
    locais[1].setNome("Acre");
    locais[2].setNome("Alagoas");
    locais[3].setNome("Amapa");
    locais[4].setNome("Amazonas");
    locais[5].setNome("Bahia");
    locais[6].setNome("Ceara");
    locais[7].setNome("DistritoFederal");
    locais[8].setNome("Espirito Santo");
    locais[9].setNome("Goias");
    locais[10].setNome("Maranhao");
    locais[11].setNome("Mato Grosso");
    locais[12].setNome("Mato Grosso do Sul");
    locais[13].setNome("Minas Gerais");
    locais[14].setNome("Para");
    locais[15].setNome("Paraiba");
    locais[16].setNome("Parana");
    locais[17].setNome("Pernambuco");
    locais[18].setNome("Piaui");
    locais[19].setNome("Rio de Janeiro");
    locais[20].setNome("Rio Grande do Norte");
    locais[21].setNome("Rio Grande do Sul");
    locais[22].setNome("Rondonia");
    locais[23].setNome("Roraima");
    locais[24].setNome("Santa Catarina");
    locais[25].setNome("Sao Paulo");
    locais[26].setNome("Sergipe");
    locais[27].setNome("Tocantins");

    locais[0].setTipo(0);
    locais[1].setTipo(1);
    locais[2].setTipo(2);
    locais[3].setTipo(3);
    locais[4].setTipo(4);
    locais[5].setTipo(5);
    locais[6].setTipo(6);
    locais[7].setTipo(7);
    locais[8].setTipo(8);
    locais[9].setTipo(9);
    locais[10].setTipo(10);
    locais[11].setTipo(11);
    locais[12].setTipo(12);
    locais[13].setTipo(13);
    locais[14].setTipo(14);
    locais[15].setTipo(15);
    locais[16].setTipo(16);
    locais[17].setTipo(17);
    locais[18].setTipo(18);
    locais[19].setTipo(19);
    locais[20].setTipo(20);
    locais[21].setTipo(21);
    locais[22].setTipo(22);
    locais[23].setTipo(23);
    locais[24].setTipo(24);
    locais[25].setTipo(25);
    locais[26].setTipo(26);
    locais[27].setTipo(27);


    for(i = 0; i < 28; i++){
        for(j = 0; j < 150; j++){
            locais[i].insumos[j] = new Insumo();
        }
    }

    nInsumos = 0;
}

Local *Controler::getLocais(int i){
    return &locais[i];
}

void Controler::cadastraInsumosMs(Insumo *ins){

    if (nInsumos < 150){
        locais[0].insumos[nInsumos] = ins;
        locais[0].insumos[nInsumos]->setAtivo(1);
        nInsumos++;
    }

}

void Controler::consultaInsumosMS(){

    int i;

    for(i = 0; i < nInsumos; i++){
        if(locais[0].insumos[i]->getAtivo() == 1){
            std::cout << locais[0].insumos[i]->getDescricao() << std::endl;
        }
    }
}

void Controler::consultaInsumosPorLocal(Local loc){

    int i;

    for(i = 0; i < nInsumos; i++){
        if(loc.insumos[i]->getAtivo() == 1){
            std::cout << loc.insumos[i]->getNome() << std::endl;
        }
    }

}
void Controler::consultaInsumosDescricao(Local loc){

    int i;

    for(i = 0; i < nInsumos; i++){
        if(loc.insumos[i]->getAtivo() == 1){
        std::cout << loc.insumos[i]->getDescricao() << std::endl;
        }
    }
}
void Controler::consultaInsumosPorTipo(Local loc, int tipoInsumo){

    int i;

    for(i = 0; i < nInsumos; i++){
        if(loc.insumos[i]->getAtivo() == 1){
            if(loc.insumos[i]->getTipoInsumo() == tipoInsumo){
                std::cout << loc.insumos[i]->getDescricao() << std::endl;
            }
        }

    }
}
void Controler::distribuiInsumo(Local dest, std::string nomeDoInsumo){

    int y, i;

    for(i = 0;  i < nInsumos; i++){
        if(locais[0].insumos[i]->getNome() == nomeDoInsumo){
            for(y = 0; y < nInsumos; y++){
                if(dest.insumos[y]->getAtivo() == 0){
                    *dest.insumos[y] = *locais[0].insumos[i];
                    locais[0].insumos[y]->setQuantidade(0);
                    dest.insumos[y]->setAtivo(1);
                    break;
                }
            }
            break;
        }
    }
    std::cout << "\nInsumo: " << dest.insumos[y]->getNome() << " enviado para " << dest.getNome() << " com sucesso\n" << std::endl;
}

Local Controler::verificaEstado(std::string est){

    int i;

    for(i = 0; i < 28; i++){
        if (locais[i].getNome() == est){
            return locais[i];
        }
    }
    return locais[0];
}


