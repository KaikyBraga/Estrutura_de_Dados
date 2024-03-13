#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void frasePreferida()
{
    cout << "Eu adoro a EMAp!" << endl;
}

void montaFrases(char chArtigo, string strPalavra)
{
    cout << "Eu adoro " << chArtigo << " " << strPalavra << "!" << endl;
}

void montaFrasePadrao(char chArtigo = 'a', string strPalavra = "")
{
    cout << "Eu adoro " << chArtigo << " " << strPalavra << "!" << endl;
}

int potenciacao(int iBase, int iExpoente)
{
    return pow(iBase, iExpoente);
}

float modulo(float iValor)
{
    return fabs(iValor);
}

void minhaFuncao(int arriNumeros[], int iTamnanhoVetor)
{
    for(int i=0; i < iTamnanhoVetor; i++)
    {
        cout << arriNumeros[i] << endl;
    }
}

int soma(int iValor1, int iValor2) // Asssinatura -> soma(int,int)
{
    return iValor1 + iValor2;
}  

// Sobrecarga de função
int soma(int iValor1, int iValor2, int iValor3) // Asssinatura -> soma(int,int,int)
{
    return iValor1 + iValor2 + iValor3;
}

int main()
{
    frasePreferida();
    frasePreferida();
    frasePreferida();
    cout << "==============================" << endl;

    montaFrases('o', "Yuri");
    montaFrases('a', "EMAp");
    cout << "==============================" << endl;

    montaFrasePadrao();
    montaFrasePadrao('o', "Yuri");
    cout << "==============================" << endl;

    cout << potenciacao(2,10) << endl;
    cout << potenciacao(3,5) << endl;
    cout << "==============================" << endl;

    cout << "modulo(2) " << modulo(2) << endl;
    cout << "modulo(-2) " << modulo(-2) << endl;

    cout << "modulo(2.7) " << modulo(2.7) << endl;
    cout << "modulo(-2.7) " << modulo(-2.7) << endl; 
    cout << "==============================" << endl;

    int arriVetorTeste[5] = {0, 7, 13, 42, 666};
    int iTamanhovetor = sizeof(arriVetorTeste)/sizeof(arriVetorTeste[0]);

    minhaFuncao(arriVetorTeste, iTamanhovetor);
    cout << "==============================" << endl;

    int iNum1 = 10;
    int iNum2 = 20;
    int iNum3 = 30;

    cout << soma(iNum1, iNum2) << endl;
    cout << soma(iNum1, iNum2, iNum3) << endl;
    cout << "==============================" << endl;

    return 0;
}