#include <iostream>

using std::cout;
using std::endl;
using std::string;


// IMPLEMENTAÇÂO DE UMA PILHA
typedef struct Node
{
    int iData;
    Node* ptrNext;
} Node;

typedef struct Stack
{
    Node* ptrTop;
} Stack;

Stack* newStack();
Node* newNode(int);
void push(Stack* const, int);
void showTopElement(Stack* const);
void showElements(Stack* const);
void pop(Stack* const);

int main()
{ 
    // 1. Função que exibe o elemento do topo
    // 2. função que exibe todos os elementos
    // 3. função que remove um nó

    Stack* stack = newStack();
    pop(stack);
    cout << "---------------------" << endl;
    showTopElement(stack);
    cout << "---------------------" << endl;
    push(stack, 0);
    showTopElement(stack);    
    cout << "---------------------" << endl;
    push(stack, 3);
    showTopElement(stack);
    cout << "---------------------" << endl;
    push(stack, 7);
    showTopElement(stack);
    cout << "---------------------" << endl;
    push(stack, 10);
    showTopElement(stack);
    cout << "---------------------" << endl;
    push(stack, 13);
    showTopElement(stack);
    push(stack, 42);
    showTopElement(stack);
    cout << "=====================" << endl;
    showElements(stack);
    cout << "---------------------" << endl;
    pop(stack);
    showTopElement(stack);
    
    return 0;
}

Node* newNode(int iValue)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iData = iValue;
    temp->ptrNext = nullptr;

    return temp;
}

Stack* newStack()
{
    Stack* temp = (Stack*) malloc(sizeof(Stack));
    temp->ptrTop = nullptr;

    return temp;
}


void push(Stack* const stack, int iValue)
{
    Node* temp = newNode(iValue);

    temp->ptrNext = stack->ptrTop;
    stack->ptrTop = temp;

    return;
}

void pop(Stack* const stack)
{
    if (stack->ptrTop == nullptr)
    {
        cout << "Pilha Vazia" << endl;
        return;
    } 

    cout << "Elemento Removido: " << stack->ptrTop->iData << endl;
    
    Node* temp = stack->ptrTop;

    stack->ptrTop = stack->ptrTop->ptrNext;

    free(temp);

    return;
}

void showTopElement(Stack* const stack)
{
    cout << "Topo da pilha: " << ((stack->ptrTop != nullptr) ? (stack->ptrTop)->iData : -1) << endl;
}

void showElements(Stack* const stack)
{
    if (stack->ptrTop == nullptr)
    {
        cout << "Pilha Vazia" << endl;
        return;
    }

    Node* current = stack->ptrTop;

    while (current != nullptr)
    {
        cout << "Elemento: " << current->iData << endl;
        current = current->ptrNext;
    }
}
