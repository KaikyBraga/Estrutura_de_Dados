#include <iostream>

using std::cout;
using std::endl;
using std::string;

void troca(int&,int&);
int& trocaElemento(int,int[]);

int main(){

    string strNome = "Yuri Saporito";
    int iValor = 42;
    int iValorFututo = 666;

    cout << "Valor da String " << strNome << ". Endereço da String" << &strNome << endl;
    cout << "Valor do Inteiro " << iValor << ". Endereço do Inteiero" << &iValor << endl;
    cout << "====================================" << endl;

    string& strrefNome = strNome; // Não pode ser nula a referência
    int& irefValor = iValor;

    cout << "Valor da Ref.String " << strrefNome << ". Endereço da Ref.String" << &strNome << endl;
    cout << "Valor da Ref.Inteiro " << irefValor << ". Endereço da Ref.Inteiro" << &iValor << endl;
    cout << "====================================" << endl;
    
    strNome = "C. Camacho";
    irefValor = iValorFututo;

    cout << "Valor da String " << strNome << ". Endereço da String" << &strNome << endl;
    cout << "Valor do Inteiro " << iValor << ". Endereço do Inteiero" << &iValor << endl;
    cout << "====================================" << endl;

    int iNum1 = 7;
    int iNum2 = 42;

    cout << "iNum1: " << iNum1 << endl;
    cout << "iNum1: " << iNum2 << endl;
    cout << "====================================" << endl;

    int arriVetor[5] = {0, 7, 13, 42, 666};

    for (int i = 0; i < 5; i++)
    {
        cout << "Vetor[" << i << "] = " << arriVetor[i] << endl;
    }

    trocaElemento(4,arriVetor) = 111;
    
    cout << "====================================" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Vetor[" << i << "] = " << arriVetor[i] << endl;
    }

    cout << "====================================" << endl;

    return 0;
}

void troca(int& irefValor1, int& irefValor2)
{
    int iTemp = irefValor1;
    irefValor1 = irefValor2;
    irefValor2 = iTemp;
}

int& trocaElemento(int iElemento, int arriVetor[])
{
    return arriVetor[iElemento];
} 