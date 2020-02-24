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

int main(){
   Node* head= createSmallLinkedList(10, 20);
   cout<<head<<endl;
   cout<<head->data<<endl;
   cout<<head->next->data<<endl;
   return 0;
}
