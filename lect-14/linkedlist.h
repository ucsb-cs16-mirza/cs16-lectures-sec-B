//linkedlist.h


struct Node{
   int data; //stores the data
   Node *next; // stores the address of the
             //next node in the list
};

Node* insert(Node *h, int value);
bool find(Node *h, int value);
int min(Node* h);
void print(Node *h);
void clear(Node *&h);