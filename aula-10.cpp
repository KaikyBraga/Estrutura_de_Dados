#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int arriValores[5] = {0,7,13,42,999};
    cout << "Endereco de [0]: " << arriValores << endl;

    int* ptrArrayValores1 = arriValores;
    cout << "PTR: " << ptrArrayValores1 << endl;

    int* ptrArrayValores2 = &arriValores[0];
    cout << "PTR2: " << ptrArrayValores2 << endl;
    cout << "=====================================================" << endl;

    cout << "Valor de ptrArrayValores1[0]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[0]: " << ptrArrayValores1 << endl;

    ptrArrayValores1++;
    cout << "Valor de ptrArrayValores1[1]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[1]: " << ptrArrayValores1 << endl;

    ptrArrayValores1+=3;
    cout << "Valor de ptrArrayValores1[4]: " << *ptrArrayValores1 << endl;
    cout << "Endereço de ptrArrayValores1[4]: " << ptrArrayValores1 << endl;

    cout << "Subtração de Ponteiros: " << ptrArrayValores1 - ptrArrayValores2 << endl;

    return 0;
}
