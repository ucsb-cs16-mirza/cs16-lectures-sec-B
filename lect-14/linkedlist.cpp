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

bool find(Node *h, int value){
   Node *p = h;
   while(p){
      //Do something
      if(p->data == value){
         return true;
      }
      p = p->next;
   }
   return false;
}
//Node* insert(Node *h, int value);
void insert(LinkedList& ll, int value){
   ll.head = insert(ll.head, value);
   if(!ll.tail){
      //empty linked list   
      ll.tail = ll.head;
   }
   
}
bool find(const LinkedList& ll, int value){
   return find(ll.head, value);
}

void print(LinkedList ll){
   print(ll.head);
}
void clear(LinkedList& ll){
   clear(ll.head);
   ll.head = 0;
   ll.tail = 0;
}

int main(){
   //create a new linked list
   LinkedList list = {0, 0};  
   cout<<"Insert 10, 20"<<endl;
   insert(list, 10);//insert 10 at the head of the list
   insert(list, 20);
   cout<<"Print"<<endl;
   print(list); // 20, 10
   cout<<"Clear nodes"<<endl;
   clear(list);
   cout<<"Print"<<endl;
   print(list); // 20, 10
   return 0;
}
