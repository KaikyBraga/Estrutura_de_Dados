#include <iostream>

using std::cout;
using std::endl;
using std::string;


// Fila -> FCFS, FIFO
// Pilha -> LCFS, LIFO

typedef struct Node
{
    int iData;
    struct Node* next;
} Node;

typedef struct Queue
{
    struct Node* front;
    struct Node* rear;
} Queue;

Node* nemNode(int iValue)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iData = iValue;
    temp->next = nullptr;

    return temp;
}

Queue* newQueue()
{
    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp->front = nullptr;
    temp->rear = nullptr;

    return temp;
}

void enQueue(Queue* const queue, int iValue)
{
    Node* temp = nemNode(iValue);

    if (queue->front == nullptr)
    {
        queue->front = temp;
        queue->rear = temp;
    }

    else
    {
        queue->rear->next = temp;
        queue->rear = temp;
    }

    return;
}

void showFirstElement(Queue* const queue)
{
    cout << "Primeiro Elemento: " << ((queue->front != NULL) ? (queue->front)->iData : -1) << endl;
}

void showLastElement(Queue* const queue)
{
    cout << "Último Elemento: " << ((queue->front != NULL) ? (queue->front)->iData : -1) << endl;
}

void showElements(Queue* const queue)
{
    if (queue->front == nullptr)
    {
        cout << "Fila Vazia" << endl;
        return;
    }

    Node* current = queue->front;

    while (current != nullptr)
    {
        cout << "Elemento: " << current->iData << endl;
        current = current->next;
    }
}


int main()
{
    // 1. Estrutura de um nó
    // 2. Estrutura de uma fila
    // 3. Função que cria uma fila
    // 4. Função que cria um nó
    // 5. Função que enfileira um nó
    // 6. Função que exibe o primeiro elemento da fila
    // 7. Função que exibe o último elemento de uma fila
    // 8. Função que exibe os elementos

    Queue* queue = newQueue();
    showFirstElement(queue);
    showLastElement(queue);
    showElements(queue);
    cout << "================================" << endl;

    enQueue(queue,0);
    showFirstElement(queue);
    showLastElement(queue);
    showElements(queue);
    cout << "================================" << endl;

    enQueue(queue,3);
    enQueue(queue,7);
    enQueue(queue,13);
    enQueue(queue,42);
    enQueue(queue,3);
    showFirstElement(queue);
    showLastElement(queue);
    showElements(queue);
    cout << "================================" << endl;

    return 0;

}