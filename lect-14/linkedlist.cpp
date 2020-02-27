//linkedlist.cpp

#include <iostream>
using namespace std;
#include "linkedlist.h"

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
   cout<<"Insert 10, 20"<<endl;
   head = insert(head, 10);//insert 10 at the head of the list
   head = insert(head, 20);
   cout<<"Print"<<endl;
   print(head); // 20, 10
   cout<<"Clear nodes"<<endl;
   clear(head);
   cout<<"Print"<<endl;
   print(head); // 20, 10
   return 0;
}
