#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int iContador = 0;
    while (iContador < 5)
    {
        cout << iContador << endl;
        iContador++;
    }

    iContador = 42;
    do {
        cout << iContador << endl;
        iContador++;
    }
    while (iContador <= 5);

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << "(" << i << "," << j << ")" << endl;
        }   
    }

    //TIPO NOME TAMANHO
    int x[100] = {0};
    cout << "x[0] = " << x[0] << ", endereco: " << &x[0] << endl;
    cout << "x[1] = " << x[1] << ", endereco: " << &x[1] << endl;
    cout << "x[99] = " << x[99] << ", endereco: " << &x[99] << endl;
    cout << "Tamanho de x = " << sizeof(x)/sizeof(x[0]) << endl;  //len()
    cout << "-------------------------------------------" << endl;

    int array[4];

    array[0] = 8;
    array[1] = 64;
    array[2] = 256;
    array[3] = 512;

    cout << "array[0] = " << array[0] << ", endereco: " << &array[0] << endl;
    cout << "array[1] = " << array[1] << ", endereco: " << &array[1] << endl;
    cout << "array[2] = " << array[2] << ", endereco: " << &array[2] << endl;
    cout << "array[3] = " << array[3] << ", endereco: " << &array[3] << endl;
    cout << "array[4] = " << array[4] << ", endereco: " << &array[4] << endl; //WTF
    cout << "Tamanho de array = " << sizeof(array)/sizeof(array[0]) << endl;  //len()
    cout << "-------------------------------------------" << endl;

    if (array == &array[0]) {cout << "Faz Sentido!" << endl;}

    // Row Major
    int arriTest1[2][3] = {2,4,5,9,0,19};
    int arriTest2[2][3] = {{2,4,5},{9,0,19}};

    cout << "--- Testando Array 1 ---" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array 1 em [" << i << "][" << j << "] = " << arriTest1[i][j] << ", Endereço: " << &arriTest1[i][j] << endl;
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array 2 em [" << i << "][" << j << "] = " << arriTest2[i][j] << ", Endereço: " << &arriTest2[i][j] << endl;
        }
        
    }

    return 0;
} 