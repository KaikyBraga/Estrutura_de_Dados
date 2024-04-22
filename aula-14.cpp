#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;



typedef struct Node
{
    int iPayload;
    Node* ptrNext;
    Node* ptrPrev;
} Node;

Node* createNode(int);
void insertFront(Node**, int);
void insertEnd(Node**, int);
void displayList(Node*);


int main()
{
    
    Node* head = nullptr;
    displayList(head);
    cout << "===============================" << endl;
    insertEnd(&head, 0);
    insertEnd(&head, 1);
    insertEnd(&head, 8);
    insertEnd(&head, 10);
    cout << "===============================" << endl;
    displayList(head);
    return 0;
}



Node* createNode(int iPayload)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->iPayload = iPayload;
    temp->ptrNext = nullptr;
    temp->ptrPrev = nullptr;
    
    return temp;
}

void displayList(Node* node)
{
    if (node == nullptr)
    {
        cout << "Lista Vazia: Não é possível realizar displayList" << endl;
        return;
    }

    if (node->ptrPrev != nullptr)
    {
        cout << "Meio ou fim da Lista: Não é possível realizar displayList" << endl;
        return;   
    }
    
    cout << "Payload: ";
    
    Node* temp = node;
    
    // Percorremos a lista até seu fim (ptrNext do último nó é nulo)
    while (temp != nullptr)
    {
        cout << temp->iPayload << " ";
        temp = temp->ptrNext;
    }
    
    cout << endl;
    
}


void insertFront(Node** head, int iPayload)
{
    // TODO :)
    Node* newNode = createNode(iPayload);
}

void insertEnd(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);   
    //newNode->ptrNext = nullptr;
    
    if (*head == nullptr)
    {
        //newNode->ptrPrev = nullptr;
        (*head) = newNode;
        return;
    }
    
    Node* temp = (*head);
    
    // Percorremos a lista até seu fim (ptrNext do último nó é nulo)
    while(temp->ptrNext != nullptr)
    {
        temp = temp->ptrNext;
    }
    
    newNode->ptrNext = temp; // newNode aponta para o fim da Lista
    temp->ptrNext = newNode; // Antigo elemento aponta para o novo nó
    
}


