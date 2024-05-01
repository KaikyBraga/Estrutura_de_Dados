#include <iostream>
#include <chrono>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

void swapValue(int&, int&);
void printArray(int[], int);
void bubbleSort(int[], int);
void optimizebubbleSort(int[], int);

int main()
{
    int arriNumbers_1[] = {42, 7, 0, 3, 666, 1, 111, 10, 13, 137};
    int iArraySize_1 = 10;

    cout << "Array Original: ";
    printArray(arriNumbers_1, iArraySize_1);

    // time_point<std::chrono::high_resolution_clock> timeStart
    auto timeStart = high_resolution_clock::now();
    bubbleSort(arriNumbers_1, iArraySize_1);
    auto timeStop = high_resolution_clock::now();

    cout << "Array Ordenado: ";
    printArray(arriNumbers_1, iArraySize_1);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos." << endl;
    cout << "============================" << endl;

    /////////////////////////////////////////////////////////////////////////////////

    int arriNumbers_2[] = {42, 7, 0, 3, 666, 1, 111, 10, 13, 137};
    int iArraySize_2 = 10;

    cout << "Array Original: ";
    printArray(arriNumbers_2, iArraySize_2);

    // time_point<std::chrono::high_resolution_clock> timeStart
    timeStart = high_resolution_clock::now();
    optimizebubbleSort(arriNumbers_2, iArraySize_2);
    timeStop = high_resolution_clock::now();

    cout << "Array Ordenado: ";
    printArray(arriNumbers_2, iArraySize_2);

    timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos." << endl;
    cout << "============================" << endl;

    return 0;
}


void swapValue(int& irefValue_1, int& irefValue_2)
{
    int iTemp = irefValue_1;
    irefValue_1 = irefValue_2;
    irefValue_2 = iTemp;
}

void printArray(int arrNumbers[], int iLength)
{
    for (int i = 0; i < iLength; i++) cout << arrNumbers[i] << " ";
    cout << endl;
}

void bubbleSort(int arrINumbers[], int iLength)
{  
    for (int iOuterLoop = 0; iOuterLoop < iLength-1; iOuterLoop++)
    {
        for (int iInnerLoop = 0; iInnerLoop < iLength - 1; iInnerLoop++)
            if (arrINumbers[iInnerLoop] > arrINumbers[iInnerLoop+1])
                swapValue(arrINumbers[iInnerLoop], arrINumbers[iInnerLoop+1]);
    }
}

void optimizebubbleSort(int arrINumbers[], int iLength)
{  
    bool bUnordered = false;

    for (int iOuterLoop = 0; iOuterLoop < iLength-1; iOuterLoop++)
    {
        bUnordered = false;

        for (int iInnerLoop = 0; iInnerLoop < iLength-1-iOuterLoop; iInnerLoop++)
        {
            if (arrINumbers[iInnerLoop] > arrINumbers[iInnerLoop+1])
            {
                swapValue(arrINumbers[iInnerLoop], arrINumbers[iInnerLoop+1]);
                bUnordered = true;
            }
        }

        if (bUnordered == false) break;
    }
}