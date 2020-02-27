// storing sequences : data structures 
// (1) Arrays
// (2) LinkedLists
// Operations with data structure in general
/* 
- insert a value, (for linked list) at the head of the list
at the end of the list, anywhere in the middle
- find an element - different flavors of this
- print all the elements
- min or max
- sum 
- count the elements
- delete a value (hardest)
- deleta all the values (careful)
*/

#include <iostream>
using namespace std;


struct Node{
   int data; //stores the data
   Node *next; // stores the address of the
             //next node in the list
};

Node* createSmallLinkedList(int x, int y){
  /* Node n1 = {x, 0};
   Node n2 = {y, 0};
   n1.next = &n2;
   return &n1*/
   Node* n1 = new Node{x, 0};
   Node* n2 = new Node{y, 0};
   n1->next = n2;
   return n1;
}
//Preconditiion - h is the head of a valid linked list
//Postcondition - insert a new node with data "value"
// at the head of the list and then return the new head

Node* insert(Node *h, int value){
   Node *n = new Node{value, h}; 
   return n;
}

void print(Node *h){
   Node *p = h;
   while(p){
      cout<<p->data<<" ";// process p
      p = p->next;
   }
   cout<<endl;
}

void clear(Node *&h){
   //delete h; // only deletes the first node
   Node *p = h;
   while(p){
      Node *q = p->next;
      delete p;
      p = q;
   }
   h = 0;
}
int main(){
   Node *head = 0; //empty
   head = insert(head, 10);//insert 10 at the head of the list
   head = insert(head, 20);
   print(head); // 20, 10
   clear(head);
   //head = 0;
   // Is head pointing to a valid linked list?
   // A. Yes
   // B. No
   return 0;
}
