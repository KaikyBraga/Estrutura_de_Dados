#include <iostream>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

void printArray(int[], int);
void insertSort(int[], int);

int main()
{
    int arriNumbers_1[] = {42, 7, 0, 3, 666, 1, 111, 10, 13, 137}; 
    int iArraySize1 = 10;

    cout << "Array original: ";
    printArray(arriNumbers_1, iArraySize1);

    // ========================================================================
    auto timeStart = high_resolution_clock::now();
    insertSort(arriNumbers_1, iArraySize1);
    auto timeStop = high_resolution_clock::now();

    cout << "Array ordenado: ";
    printArray(arriNumbers_1, iArraySize1);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos." << endl;
    cout << "========================================" << endl;

    return 0;
}

void printArray(int arriNumbers[], int iLength)
{
     for (int i = 0; i < iLength; i++) cout << arriNumbers[i] << " "; 
     cout << endl;
}

void insertSort(int arriNumbers[], int iLength)
{
    int iInsertValue = 0;
    int iInnerLoop = 0;

    for (int iOuterLoop = 1; iOuterLoop < iLength; iOuterLoop++)
    {
        iInsertValue = arriNumbers[iOuterLoop];
        iInnerLoop = iOuterLoop - 1;

        while (iInsertValue < arriNumbers[iInnerLoop] && iInnerLoop >= 0)
        {
            arriNumbers[iInnerLoop + 1] = arriNumbers[iInnerLoop];
            iInnerLoop--;
        }

        arriNumbers[iInnerLoop + 1] = iInsertValue;
    }
}