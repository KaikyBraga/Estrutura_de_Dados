#include <iostream>

using std::cout;
using std::endl;
using std::string;


// Fila -> FCFS, FIFO
// Pilha -> LCFS, LIFO


// IMPLEMENTAÇÂO DE UMA FILA
typedef struct Node
{
    int iData;
    Node* next;
} Node;

typedef struct Queue
{
    struct Node* front;
    struct Node* rear;
} Queue;

Queue* newQueue()
{
    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp->front = nullptr;
    temp->rear = nullptr;

    return temp;
}

Node* newNode(int iValue)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iData = iValue;
    temp->next = nullptr;

    return temp;

}

void enQueue(Queue* const queue, int iValue)
{
    Node* temp = newNode(iValue);

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

void deQueue(Queue* const queue)
{
    if (queue->front == nullptr)
    {
        cout << "Fila Vazia" << endl;
        return;
    } 
    
    Node* temp = queue->front;

    cout << "Elemento Removido: " << temp->iData << endl;

    queue->front = queue->front->next;

    free(temp);

    if (queue->front == nullptr)
    {
        queue->rear = nullptr;
    }   

    return;
}

void showFirstElement(Queue* const queue)
{
    cout << "Primeiro Elemento: " << ((queue->front != NULL) ? (queue->front)->iData : -1) << endl;
}

void showLastElement(Queue* const queue)
{
    cout << "Primeiro Elemento: " << ((queue->rear != NULL) ? (queue->rear)->iData : -1) << endl;
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
    // 4. Uma função que cria um nó
    // 5. Função que enfileira um nó
    // 6. Função que exibe o primeiro elemento
    // 7. função que exibe o segundo elemento
    // 8. função que exibe todos os elementos
    // 9. função que remove um nó

    Queue* queue = newQueue();
    showFirstElement(queue);
    showLastElement(queue);
    cout << "---------------------" << endl;
    showElements(queue);
    deQueue(queue);
    cout << "=====================" << endl;

    enQueue(queue, 0);
    showFirstElement(queue);
    showLastElement(queue);
    cout << "---------------------" << endl;
    showElements(queue);
    deQueue(queue);
    cout << "=====================" << endl;

    enQueue(queue, 3);
    enQueue(queue, 7);
    enQueue(queue, 13);
    enQueue(queue, 42);
    showFirstElement(queue);
    showLastElement(queue);
    cout << "---------------------" << endl;
    showElements(queue);

    cout << "=====================" << endl;

    return 0;
}
