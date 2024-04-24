#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Lista circular: o ultimo elemento aponta para o primeiro
//Lista duplamente encadeada: todo nó aponta para o anterior e para o próximo (buble sort)

//LISTA DUPLAMENTE ENCADEADA:

typedef struct Node
{
    int iPayload;
    Node* ptrNext;
    Node* ptrPrev;
} Node;

Node* createNode(int);
void insertFront(Node**, int);
void insertEnd(Node**, int);
void insertAfter(Node*, int);
void deleteNode(Node**, Node*);
void displayList(Node*);

int main()
{
    Node* head = nullptr;
    displayList(head);
    cout << "==============" << endl;
    insertEnd(&head,0);
    insertEnd(&head,1);
    insertEnd(&head,3);
    insertEnd(&head,7);
    insertEnd(&head,10);
    insertEnd(&head,13);
    displayList(head);
    cout << "==============" << endl;
    return 0;
}



Node* createNode(int iPayload)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp -> iPayload = iPayload;
    temp -> ptrNext = nullptr;
    temp -> ptrPrev = nullptr;
    
    return temp;
}

void displayList(Node* node)
{
    if (node == nullptr)
    {
        cout << "Lista vazia: Não é possível realizar displayList" << endl;
        return; //Usa return pra sair da função, o resto do código não será executado
    }
    
    if  (node -> ptrPrev != nullptr)
    {
        cout << "Meio ou Fim da Lista: Não é possível realizar displayList" << endl;
        return;
       
    }
    
    Node* temp = node;
     
    cout << "Payload: ";
    
    while(temp != nullptr)
    {
        cout << temp -> iPayload<< " ";
        temp = temp -> ptrNext;
    }
    
    cout << endl;
}

void insertFront(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);
    // newNode->ptrPrev = nullptr;
    
    if (*head != nullptr)
    {
        (*head)->ptrPrev = newNode;
        newNode->ptrNext = (*head);
        (*head) = newNode;
        
        return;
    }
    
    (*head) = newNode;
}

void insertEnd(Node** head, int iPayload)
{
  Node* newNode = createNode(iPayload);
  //newNode -> ptrNext = nullptr;
  
  if (*head == nullptr)
  {
      //newNode -> ptrNext = nullptr; Essa linha não é obrigatória pois já definimos anteriormente
      (*head) = newNode;
      return;
      
  }
  
  Node* temp = (*head);
  
  //Percorremos a lista até seu fim(ptrNext do ultimo nó é NULL)
  while(temp -> ptrNext != nullptr) temp = temp -> ptrNext;
  
  newNode -> ptrPrev = temp; //newNode aponta para o fim da lista
  temp -> ptrNext = newNode; //Antigo último elemento aponta para o novo nó
}

void insertAfter(Node* ptrLocation, int iPayload)
{
    
    if (ptrLocation == nullptr)
    {
        cout << "Location é NULL." << endl; 
        return;
    }
    
    // Corrigir nó a ser inserido
    Node* newNode = createNode(iPayload);
    newNode->ptrNext = ptrLocation->ptrNext;
    newNode-->ptrPrev = ptrLocation;
    
    // Corrigir o ponto de inserção
    ptrLocation->ptrNext = newNode;
    
    // Caso o exista elemento na frente do elemento adicionado
    if (newNode->ptrNext != nullptr)
    {
        newNode->ptrNext->ptrPrev = newNode;
    }
    
}

void deleteNode(Node** head, Node* ptrDelete)
{
    if (*head == nullptr || ptrDelete == nullptr)   
    {
        cout << "Não foi possível remover." << endl;
        return;
    }
    
    // Caso o ptrDelete seja o primeiro elemento da lista
    if (*head == ptrDelete) 
        (*head) = ptrDelete->ptrNext;
    
    // Se o ptrDelete não é o último nó
    if (ptrDelete->ptrNext != nullptr) 
        ptrDelete->ptrNext->ptrPrev = ptrDelete->ptrPrev; 
    
    // Se o ptrDelete não é o primeiro nó
    if (ptrDelete->ptrPrev != nullptr)
        ptrDelete->ptrPrev->ptrNext ptrDelete->ptrNext;
    
    free(ptrDelete);
}

// Exercício 1. Elaborar a função void insertBefore(Node*, int)
// Exercício 2. Elaborar a função void deleteNodebyValue(Node*, int)
// Exercício 3. Elaborar a função Node* searchNOdebyValue(Node*, int)
