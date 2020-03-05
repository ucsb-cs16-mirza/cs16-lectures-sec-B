//linkedlist.h

struct Node{
   int data; //stores the data
   Node *next; // stores the address of the
             //next node in the list
};
struct LinkedList{
   Node *head; // pointer to the first node
   Node *tail; // pointer to the last node
};

//also useful for recursive implementation
Node* insert(Node *h, int value); //helper function
bool find(Node *h, int value);
int min(Node* h);
void print(Node *h);
void clear(Node *h);
void clearRecursive(Node *h);


void insert(LinkedList& ll, int value);
bool find(const LinkedList& ll, int value);
int min(LinkedList ll);
void print(LinkedList ll);
void clear(LinkedList& ll);
