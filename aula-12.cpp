#include <iostream>

using std::cout;
using std::endl;
using std::string;




// IMPLEMENTAÇÂO DE UMA PILHA
typedef struct Node
{
    int iData;
    struct Node* ptrNext;
} Node;

typedef struct Stack
{
    Node* ptrTop;
} Stack;

Node* nemNode(int iValue)
{
    Node* temp = (Node*) malloc(sizeof(Stack));
    temp->iData = iValue;
    temp->ptrNext = nullptr;

    return temp;
}

void showTopElement(Stack* const);
void showElements(Stack* const);
void push(Stack* const, int);
void pop(Stack* const);

Stack* newStack();

int main()
{
    // 2. Função que exibe os elementos
    // 3. Função que temove um nó

    Stack*stack = newStack();
    pop(stack);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 0);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 3);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 7);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 10);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 13);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;
    push(stack, 42);
    showTopElement(stack);
    showElements(stack);
    cout << "----------------" << endl;

    return 0;
}

Stack* newStack()
{
    Stack* temp = (Stack*) malloc(sizeof(Stack));
    temp->ptrTop = nullptr;

    return temp;
}

void push(Stack* const stack, int iValue)
{
    Node* temp = nemNode(iValue);

    temp->ptrNext = stack->ptrTop;
    stack->ptrTop = temp;

    return;
}

void pop(Stack* const stack)
{
    if(stack->ptrTop == nullptr)
    {
        cout << "Pilha Vazia" << endl;
        return;
    }

    cout << "Elemento Removido: " << stack->ptrTop->iData << endl;

    Node* temp = stack->ptrTop;

    stack->ptrTop = stack->ptrTop->ptrNext;

    free(temp);
}


void showTopElement(Stack* const stack)
{
    cout << "Topo da Pilha: " << ((stack->ptrTop != nullptr) ? (stack->ptrTop)-> iData : -1) << endl;
}

void showElements(Stack* const stack)
{
    if(stack->ptrTop == nullptr)
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
