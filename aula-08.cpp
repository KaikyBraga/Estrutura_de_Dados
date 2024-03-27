#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{   
    // Ponteiro nulo
    int* ptrInt = nullptr;

    cout << "PTR: " << ptrInt << endl;
    cout << "Endereco do PTR: " << &ptrInt << endl;
    cout << "===============================================" << endl;

    int iNumMagico = 42;
    cout << "Endereco do iNumMagico: " << &iNumMagico << endl;

    ptrInt = &iNumMagico;

    cout << "PTR: " << ptrInt << endl;
    cout << "Endereco do PTR: " << &ptrInt << endl;
    cout << "Conteudo iNumMagico: " << *ptrInt << endl;
    cout << "===============================================" << endl;

    int iNumSagrado = 7;
    cout << "Endereco iNumSagrado" << &iNumSagrado;
    
    ptrInt = &iNumMagico;
    cout << "PTR: " << ptrInt << endl;
    cout << "Endereco do PTR: " << &ptrInt << endl;
    cout << "===============================================" << endl;

    return 0;
}