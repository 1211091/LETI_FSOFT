//
// Created by luis_ on 06/06/2022.
//
#include "Cliente.h"
#include "ClienteContainer.h"

Cliente::Cliente(const string &nomeLoja){
    setNomeLoja(nomeLoja);
}

string Cliente::getNomeLoja(){
    return  this->nomeLoja;
}
string Cliente::setNomeLoja(const string &nomeLoja){
    return nomeLoja;
}
string Cliente::NomeLoja(const string& nomeLoja){

}

Cliente::~Cliente() {

}

Cliente* ClienteContainer::getCliente(const Cliente& nomeLoja){
    list<Cliente>::iterator it = procurarCliente((string&)nomeLoja);
    if(it != this->clientes.end()){
        return &(*it);
    }
    return NULL;
}