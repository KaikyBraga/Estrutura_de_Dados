
#include <iostream>


using std::cin;
using std::cout;
using std::endl;
using std::string;

/******************************************************************************
int main(){
    // inteiro - 4 bytes em geral
    // -2,147,483,648 a 2,147,483,647
    
    // Cada declaração DEVE ser por linha
    int iNum1 = 42, iNum2, iNum3 = 17; // NÃO
    
    cout << "iNum1: " << iNum1 << "\nTamanho de iNum1: " << sizeof(iNum1) << endl;
    cout << "iNum2: " << iNum2 << "\nTamanho de iNum2: " << sizeof(iNum2) << endl; // Valor lixo na memória
    cout << "iNum3: " << iNum3 << "\nTamanho de iNum3: " << sizeof(iNum3) << endl;
    
    // 2 bytes
    short sNum = 17;
    
    // 8 bytes
    long lNum = 17;
    
    // 8, 12 ou 16 bytes
    long long llNum = 17;
    
    cout << "sNum: " << sNum << "\nTamanho de sNum: " << sizeof(sNum) << endl;
    cout << "lNum: " << lNum << "\nTamanho de lNum: " << sizeof(lNum) << endl;
    cout << "llNum: " << llNum << "\nTamanho de llNum: " << sizeof(llNum) << endl;
    
    float fNum = 42.123456789;
    double dNum = 42.123456789;
    long double ldNum = 42.123456789;
    
    cout << "fNum: " << fNum << "\nTamanho de fNum: " << sizeof(fNum) << endl;
    cout << "dNum: " << dNum << "\nTamanho de dNum: " << sizeof(dNum) << endl;
    cout << "ldNum: " << ldNum << "\nTamanho de ldNum: " << sizeof(ldNum) << endl;
    
    char cValue = 'E';
    cout << "cValue: " << cValue << "\nTamanho de cValue: " << sizeof(cValue) << endl;
    
    char cPalavraPreferida_1 = 77;
    char cPalavraPreferida_2 = 0x41;
    char cPalavraPreferida_3 = 0b1110000;
    
    cout << cValue;
    cout << cPalavraPreferida_1;
    cout << cPalavraPreferida_2;
    cout << cPalavraPreferida_3 << endl;
    
    string strValue_1 = "Eu adoro a";
    string strValue_2 = "EMAp";
    
    cout << "strValue_1: " << strValue_1 << "\nTamanho de strValue_1: " << sizeof(strValue_1) << endl;
    cout << "strValue_2: " << strValue_2 << "\nTamanho de strValue_2: " << sizeof(strValue_2) << endl;
    
    cout << strValue_1 << " " << strValue_2 << endl;
    
    bool bValue_1 = true;
    bool bValue_2 = false;
    bool bValue_3 = 42;
    bool bValue_4 = 0;
    
    cout << "bValue_1: " << bValue_1 << "\nTamanho de bValue_1: " << sizeof(bValue_1) << endl;
    cout << "bValue_2: " << bValue_2 << "\nTamanho de bValue_2: " << sizeof(bValue_2) << endl;
    cout << "bValue_3: " << bValue_3 << "\nTamanho de bValue_3: " << sizeof(bValue_3) << endl;
    cout << "bValue_4: " << bValue_4 << "\nTamanho de bValue_4: " << sizeof(bValue_4) << endl;
    
    
    const int iNUMERO = 42;
    // iNUMERO = 111; // Não pode alterar constante!!!!!!!!!!!!!!!
    cout << "iNUMERO: " << iNUMERO << "\nTamanho de iNUMERO: " << sizeof(iNUMERO) << endl;
    
    unsigned short usNum = 42;
    
    cout << "usNum: " << usNum << "\nTamanho de usNum: " << sizeof(usNum) << endl;
    
    unsigned long long int ulliNum_1 = 42;
    cout << "ulliNum_1: " << usNum << "\nTamanho de ulliNum_1: " << sizeof(ulliNum_1) << endl;
    
    long unsigned int ulliNum_2 = 42; // A ordem das declarações não importa. Porém se deve escrever um código com declarações na ordem correta
    cout << "ulliNum_2: " << usNum << "\nTamanho de ulliNum_2: " << sizeof(ulliNum_2) << endl;
    
    return 0;
}
*******************************************************************************/

int main()
{
    int iValor = 42;
    int iValorLido = 0;
    int iResultado = 0;
    
    cin >> iValorLido; // input
    
    iResultado = (iValorLido < iValor) ? 0 : 1;
    
    cout  << "Resultado: " << iResultado << endl;
    
    int iDia = 1;
    
    switch (iDia)
    {
        case 1:
            cout << "Segunda-Feira" << endl;
            break;
        case 2:
            cout << "Terça-Feira" << endl;
            break;
        case 3;
            cout << "Quarta-Feira" << endl;
            break;
        case  4;
            cout << "Quinta-Feira" << endl;
        default: // Opcional
            cout << "Dia Louco" << endl;
     }
    
    return 0;
}
