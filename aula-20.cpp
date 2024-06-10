#include <iostream>

using namespace std;

unsigned long long iterativeFactorial(unsigned int);
unsigned long long recursiveFactorial(unsigned int);
unsigned long long iterativeFibonacci(unsigned int);
unsigned long long recursiveFibonacci(unsigned int);

int main()
{
    unsigned int uiNumber = 1;
    cin >> uiNumber;
    
    cout << "Fatorial iterativo de " << uiNumber << " é: " << iterativeFactorial(uiNumber) << endl;
    cout << "Fatorial recursivo de " << uiNumber << " é: " << recursiveFactorial(uiNumber) << endl;
    
    cout << "Fibonacci iterativo de " << uiNumber << " é: " << iterativeFibonacci(uiNumber) << endl;
    cout << "Fibonacci recursivo de " << uiNumber << " é: " << recursiveFibonacci(uiNumber) << endl;
    
    return 0;
}

unsigned long long iterativeFactorial(unsigned int uiNumber)
{
    unsigned long long ullResult = 1;
    
    for(int i=1; i <= uiNumber; i++)
    {
        ullResult *= i; 
    }
    
    return ullResult;
}

unsigned long long recursiveFactorial(unsigned int uiNumber)
{
    unsigned long long ullResult = 1;
    
    if (uiNumber == 0)
        return 1;
        
    return uiNumber * recursiveFactorial(uiNumber-1);
}

unsigned long long iterativeFibonacci(unsigned int uiNumber)
{
    if (uiNumber == 0) return 0;
    if (uiNumber == 1) return 1;
    
    unsigned long long ullPrevious = 0;
    unsigned long long ullCurrent = 1;
    unsigned long long ullNext = 1;
    
    for (int i = 2; i <= uiNumber; i++)
    {
        
        ullNext = ullCurrent + ullPrevious;
        ullPrevious = ullCurrent;
        ullCurrent = ullNext;
    }
    
    return ullCurrent;
}

unsigned long long recursiveFibonacci(unsigned int uiNumber)
{
    if (uiNumber <= 1)
        return uiNumber;
        
    return iterativeFibonacci(uiNumber-1) + iterativeFibonacci(uiNumber-2);
}
