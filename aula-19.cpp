#include <iostream>

using namespace std;

typedef struct Node
{
  int iPayload;
  
  Node* ptrLeft;
  Node* ptrRight;

} Node;

Node* newNode(int);
Node* insertNode(Node*, int);

void traversePreOrder(Node*);
void traverseInOrder(Node*);
void traversePostOrder(Node*);

int main()
{
    // Exemplo 1, árvore binária simples
    Node* root_1 = newNode(1);
    root_1->ptrLeft = newNode(7);
    root_1->ptrRight = newNode(13);
    root_1->ptrRight->ptrLeft = newNode(42);
    root_1->ptrRight->ptrRight = newNode(666);
    
    // Exemplo 2, árvore binária de busca (BST)
    Node* root_2 = newNode(42);
    root_2->ptrLeft = newNode(7);
    root_2->ptrRight = newNode(666);
    root_2->ptrLeft->ptrLeft = newNode(1);
    root_2->ptrLeft->ptrRight = newNode(13);
   
    cout << "Atravessar Root_2 - PreOrder:";
    traversePreOrder(root_2);
    cout << endl;
    
    cout << "Atravessar Root_2 - InOrder:";
    traverseInOrder(root_2);
    cout << endl;
    
    cout << "Atravessar Root_2 - PostOrder:";
    traversePostOrder(root_2);
    cout << endl;
   
    //Exemplo 3, com insertNode
    Node* root = nullptr;
    root = insertNode(root, 42);
    root = insertNode(root, 7);
    root = insertNode(root, 666);
    root = insertNode(root, 1);
    root = insertNode(root, 13);
    
    cout << "Atravessar Root - PreOrder:";
    traversePreOrder(root);
    cout << endl;
    
    cout << "Atravessar Root - InOrder:";
    traverseInOrder(root);
    cout << endl;
    
    cout << "Atravessar Root - PostOrder:";
    traversePostOrder(root);
    cout << endl;    
    
    return 0;
}

Node* newNode(int iData)
{
    Node* tmp = (Node*) malloc(sizeof(Node));
  
    if (tmp != nullptr)
    {
        tmp->iPayload = iData;
        tmp->ptrLeft = nullptr;
        tmp->ptrRight = nullptr;
    }
  
    return tmp;
}

Node* insertNode(Node* startingNode, int iData)
{
    if(startingNode == nullptr)
    {
        return newNode(iData);
    }
    
    if(iData < startingNode->iPayload)
    {
        startingNode->ptrLeft = insertNode(startingNode->ptrLeft, iData);
    }
    else
    {
        startingNode->ptrRight = insertNode(startingNode->ptrRight, iData);
    }

   return startingNode;
}

void traversePreOrder(Node* ptrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        cout << " " << ptrStartingNode->iPayload;
        traversePreOrder(ptrStartingNode->ptrLeft);
        traversePreOrder(ptrStartingNode->ptrRight);
    }
}

void traverseInOrder(Node* pltrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        traverseInOrder(ptrStartingNode->ptrLeft);
        cout << " " << ptrStartingNode->iPayload;
        traverseInOrder(ptrStartingNode->ptrRight);
    }
}

void traversePostOrder(Node* ptrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        traversePostOrder(ptrStartingNode->ptrLeft);
        traversePostOrder(ptrStartingNode->ptrRight);
        cout << " " << ptrStartingNode->iPayload;
    }
}
