#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int square(int*);

int somaVetor(const int*, const size_t);

int main()
{
    int iNum1 = 42;
    int iNum2 = 666;

    // Ponteiro constante para inteiro
    int* const ptrNum1 = &iNum1;
    *ptrNum1 = 7;
    // ERRO
    // ptrNum1 = &iNum2;
    
    // Ponteiro para inteiro constante
    const int* ptrNum2 = &iNum1;
    ptrNum2 = &iNum2;
    //  ERRO
    // *ptrNum2 = 7;

    // Ponteiro contante para um inteiro constante
    const int* const ptrNum3 = &iNum1; // Não se pode alterar o ponteiro e o valor apontado

    cout << "======================================================" << endl;

    cout << "Quadrado: " << square(&iNum1) << endl;
    
    int arriValores[3] = {0,1,2};

    cout << "Soma do Vetor: " << somaVetor(arriValores, 3) << endl;
 
}

int square(int* ptrNum)
{

    return *ptrNum * *ptrNum;
}

int somaVetor(const int* valores, const size_t tamVetor)
{
    return -1;
}