#include <iostream>
//Inclui coisas de entrada e saída

using std::cout; //Usando espaço de nomes para evitar repetição
using std::endl;

// Hungrian Notation, System Hungrian x Apps. Hungrian

int main()
{
    int iNum = 42;
    cout << "Valor do endereço de num: " << &iNum << endl;


    //Inicializando variável automática (não sabemos seu tipo)
    auto i = 1;
    
    //Tudo colocado no cout é impresso no console
    cout << "Hello World" << "\n";
    cout << "Valor de i: "  << i << "\n";
    
    auto c = ++i; //Pré incremento
    
    cout << "Valor de c: " << c << "\n";
    cout << "Valor de i: " << i << "\n";
    
    return 0;
}
