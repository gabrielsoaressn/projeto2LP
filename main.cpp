#include <iostream>
#include <string>
#include <fstream>

#include "Insumo.h"
#include "Controler.h"
#include "Local.h"
#include "Vacina.h"
#include "Persistence.h"
#include "Medicamento.h"
#include "EPI.h"

using namespace std;

int main()
{
    //Variaveis utility
    int param, menu, var = 1, menu2, insu;
    string estado, nom;


    //Variaveis da Vacina
    std::string ti;
    int qD;
    int it;

    //Variaveis de Medicamento
    string adm;
    string dosagem;
    string dispo;

    //Variaveis de EPI
    int tip;
    string descri;

    //Variaveis de Gerais dos Insumos
    std::string n;
    int q;
    double v;
    std::string dt;
    std::string nF;

    //Variaveis Objetos
    Local lo;
    Vacina *vacina;
    Medicamento *med;
    EPI *epi;

    Controler c = Controler();
    Persistence p = Persistence();

    //Menu
    while(var == 1){
    cout << "O que desejas fazer?" << endl;
    cout << "[1] Cadastrar" << endl;
    cout << "[2] Consultar" << endl;
    cout << "[3] Enviar Insumos para os Estados" << endl;
    cout << "[4] Sair" << endl;
    cin >> menu;

    switch (menu){
        case 1: {
            int op = 1;
            while(op == 1){
                cout << "Deseja cadastrar que tipo de insumo no MS?" << endl;
                cout << "1 - Vacina" << endl;
                cout << "2 - Medicamento" << endl;
                cout << "3 - EPI" << endl;
                cin >> param;

                if (param == 1){
                //usuario insere dados da vacina
                cin.get();
                cout << "Digite o nome da Vacina: " << endl;
                getline(cin, n);

                cout << "Digite a quantidade de Vacina: " << endl;
                cin >> q;

                cout << "Digite o valor unitario: " << endl;
                cin >> v;

                cout << "Digite a data de vencimento: " << endl;
                cin.get();
                getline(cin, dt);

                cout << "Digite o nome do fabricante: " <<  endl;

                getline(cin, nF);

                cout << "Digite o tipo de Vacina: " << endl;

                getline(cin , ti);

                cout << "Digite a quantidade de doses de vacina: " << endl;
                cin >> qD;

                cout << "Digite o intervalo entre doses de vacina: " << endl;
                cin >> it;

                //dados são passados para a vacina
                vacina = new Vacina();
                vacina->setNome(n);
                vacina->setQuantidade(q);
                vacina->setValorUnitario(v);
                vacina->setDtVencimento(dt);
                vacina->setNomeFabricante(nF);
                vacina->setTipo(ti);
                vacina->setQuantDoses(qD);
                vacina->setIntervalo(it);

                //vacina cadastrada no sistema
                c.cadastraInsumosMs(vacina);

                cout << "Desejas cadastrar mais um Insumo?" << endl;
                cout << "[1]Sim [2] Nao" << endl;
                cin >> op;
                    if (op == 2){
                        //c.consultaInsumosMS();
                        break;
                    }
                }
                if (param == 2){
               //usuario insere dados de Medicamento
                cin.get();
                cout << "Digite o nome do Medicamento: " << endl;
                getline(cin, n);

                cout << "Digite a quantidade de Medicamento: " << endl;
                cin >> q;

                cout << "Digite o valor unitario: " << endl;
                cin >> v;

                cout << "Digite a data de vencimento: " << endl;
                cin.get();
                getline(cin, dt);

                cout << "Digite o nome do fabricante: " <<  endl;

                getline(cin, nF);

                cout << "Digite a administracao de Medicamento: " << endl;

                getline(cin , adm);

                cout << "Digite a dosagem de Medicamento: " << endl;
                getline(cin , dosagem);

                cout << "Digite a disponibilizacao de Medicamento: " << endl;
                getline(cin , dispo);



                //dados são passados para a vacina
                med = new Medicamento();
                med->setNome(n);
                med->setQuantidade(q);
                med->setValorUnitario(v);
                med->setDtVencimento(dt);
                med->setNomeFabricante(nF);
                med->setAdministracao(adm);
                med->setDosagem(dosagem);
                med->setDisponibilizacao(dispo);



                //vacina cadastrada no sistema
                c.cadastraInsumosMs(med);


                cout << "Desejas cadastrar mais um Insumo?" << endl;
                cout << "[1]Sim [2] Nao" << endl;
                cin >> op;
                    if (op == 2){
                        //c.consultaInsumosMS();
                        break;

                    }
                }
                if (param == 3){
                    //usuario insere dados de EPI
                cin.get();
                cout << "Digite o nome do EPI: " << endl;
                getline(cin, n);

                cout << "Digite a quantidade de EPI: " << endl;
                cin >> q;

                cout << "Digite o valor unitario: " << endl;
                cin >> v;

                cout << "Digite a data de vencimento: " << endl;
                cin.get();
                getline(cin, dt);

                cout << "Digite o nome do fabricante: " <<  endl;

                getline(cin, nF);

                cout << "Digite o tipo de EPI: " << endl;
                cin >> tip;

                cout << "Digite a descricao de EPI: " << endl;
                cin.get();
                getline(cin , descri);



                //dados são passados para a vacina
                epi = new EPI();
                epi->setNome(n);
                epi->setQuantidade(q);
                epi->setValorUnitario(v);
                epi->setDtVencimento(dt);
                epi->setNomeFabricante(nF);
                epi->setTipo(tip);
                epi->setDescricao(descri);

                //vacina cadastrada no sistema
                c.cadastraInsumosMs(epi);


                cout << "Desejas cadastrar mais um Insumo?" << endl;
                cout << "[1]Sim [2] Nao" << endl;
                cin >> op;
                    if (op == 2){
                        //c.consultaInsumosMS();
                        break;

                    }

                }
            }
            continue;
        }
        case 2:{
            int op2 = 1;
            while(op2 == 1){
                cout << "O que desejas consultar?" << endl;
                cout << "[1] Insumos do MS" << endl;
                cout << "[2] Insumos por Estado" << endl;
                cout << "[3] Descricao de Insumos por Local" << endl;
                cout << "[4] Insumos por tipo" << endl;
                cout << "[5] Sair" << endl;
                cin >> menu2;

                switch (menu2){

                    case 1:{
                        cout << "Consultando os insumos do MS..." << endl;
                        c.consultaInsumosMS();
                        cout << "Desejas continuar?" << endl;
                        cout << "[1]Sim [2] Nao" << endl;
                        cin >> op2;
                        if (op2 == 2){
                           break;
                        }
                        continue;
                    }
                    case 2:{
                        cout << "Qual Estado desejas consultar?" << endl;
                        cin.get();
                        getline(cin, estado);

                        c.consultaInsumosPorLocal(c.verificaEstado(estado));

                        cout << "Desejas continuar?" << endl;
                        cout << "[1]Sim [2] Nao" << endl;
                        cin >> op2;
                        if (op2 == 2){
                           break;
                        }
                        continue;
                    }
                    case 3:{
                        cout << "Qual Estado desejas consultar?" << endl;
                        cin.get();
                        getline(cin, estado);

                        c.consultaInsumosDescricao(c.verificaEstado(estado));
                        cout << "Desejas continuar?" << endl;
                        cout << "[1]Sim [2] Nao" << endl;
                        cin >> op2;
                        if (op2 == 2){
                           break;
                        }
                        continue;
                    }
                    case 4:{
                        cout << "Qual Estado desejas consultar?" << endl;
                        cin.get();
                        getline(cin, estado);
                        cout << "Qual Insumo desejas consultar?" <<endl;
                        cout << "1 - Vacina" << endl;
                        cout << "2 - Medicamento" << endl;
                        cout << "3 - EPI" << endl;
                        cin >> insu;

                        c.consultaInsumosPorTipo(c.verificaEstado(estado), insu);
                        cout << "Desejas continuar?" << endl;
                        cout << "[1]Sim [2] Nao" << endl;
                        cin >> op2;
                        if (op2 == 2){
                           break;
                        }
                        continue;
                    }
                    case 5:{
                        op2 = 2;
                        break;
                    }
                }
            }
        continue;
        }

        case 3:{
            int op3 = 1;
            while(op3 == 1){
                cout << "Que insumo desejas enviar? (Digite o nome)" << endl;
                cin.get();
                getline(cin, nom);

                cout << "Para qual Estado desejas enviar?" << endl;
                getline(cin, estado);

                lo = c.verificaEstado(estado);

                c.distribuiInsumo(lo, nom);
                cout << "Desejas continuar?" << endl;
                    cout << "[1]Sim [2] Nao" << endl;
                    cin >> op3;
                    if (op3 == 2){
                       break;
                    }
            }
            continue;
        }
        case 4:{
            var = 0;
            break;

        }
    }
    }

    p.salvarArquivo(c);

    return 0;
}
