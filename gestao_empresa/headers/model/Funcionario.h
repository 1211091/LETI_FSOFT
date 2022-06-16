//
// Created by bila
// 6x on 04/06/2022.
//

#ifndef HEADERS_MODEL_FUNCIONARIO_H
#define HEADERS_MODEL_FUNCIONARIO_H
#include "Nome.h"
#include <string>
using namespace std;

class Funcionario{
private:
    string funcao;
    string nomeFuncionario;
    int numerofuncionario;
    static int Numero;
    string funcionario;
public:
    Funcionario(const string &nomeFuncionario,const string &funcao);
    Funcionario(const Funcionario& funcionario);
    ~Funcionario();
    void setFuncao(const string &funcao);
    void setNomeFuncionario(const string &nomeFuncionario);
    string getNomeFuncionario();
    string getFuncao();
    int getNumeroFuncionario();
    string setFuncionario(const string &funcionario);

    bool operator == (const Funcionario& obj) const;
    bool operator == (int numf) const;
};
#endif //HEADERS_MODEL_FUNCIONARIO_H
