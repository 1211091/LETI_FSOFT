//
// Created by luis_ on 31/05/2022.
//

#ifndef HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H
#define HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H


#include <exception>
#include <string>
using namespace std;

class InformacaoNaoExisteException :public exception{
private:
    string data;
public:
    __attribute__((unused)) InformacaoNaoExisteException(string data);
    const char* what();
};
#endif //HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H
