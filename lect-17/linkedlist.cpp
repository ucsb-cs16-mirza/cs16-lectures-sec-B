//linkedlist.cpp

#include <iostream>
using namespace std;
#include "linkedlist.h"

// Precondition: h should be a valid linked list
// which may be empty
// Postcondition: delete all nodes with the 
// given value, and return the head of the modified
// list
// 10->20->30, value 10
Node* deleteValue(Node *h, int value){
   if(!h){
      return 0;
   }
   
   if(h->data == value){
      // (1) 10->20->30->10, value 10
      // (2) 10->10->10->10->20, value 10
      Node *newNext = deleteValue(h->next, value);
      delete h;
      return newNext;
      // A. It will work for test case 2
      // B. It will not work for test case 2
   }else{
      // (3) 200->20->30->10, value 10
      // (4) 200->10->10->10->20, value 10
      //     200->20
      Node *newNext = deleteValue(h->next, value);
      h->next = newNext;
      return h;

   }
   return 0;
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

void clear(Node *h){
   //delete h; // only deletes the first node
   Node *p = h;
   while(p){
      Node *q = p->next;
      delete p;
      p = q;
   }
}

void clearRecursive(Node *h){
   if(!h){
      return;
   }
   Node *p = h->next;
   delete h;
   clearRecursive(p);
  
}
//Precondition is that h has at least one node

int min(Node *h){
   // 20
   // 20->10 
   // 10->20
   // 10->20->5
   
   assert(h);
   if(h->next == 0){
      return h->data;
   }
   int minRest = min(h->next);//minRest = 10
   if(h->data < minRest){
      return h->data;
   }else{
      return minRest;
   }


}



bool find(Node *h, int value){
   if(!h){
      return false;
   }
   if(h->data == value){
      //found it!
      return true;
   }
   return find(h->next, value);
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
   cout<<"Nodes in the linked list:"<<endl;
   print(list); // 20, 10
   cout<<"Clear nodes"<<endl;
   clear(list);
   cout<<"Nodes in the linked list:"<<endl;
   print(list); // 20, 10
   return 0;
}
