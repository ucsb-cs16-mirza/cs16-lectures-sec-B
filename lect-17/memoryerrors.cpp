// Final exam : next Thursday 4p - 7p

// Memory errors  - working with pointers, heap data,
// linked-lists

// Segmentation fault: Access a memory location that
// (a) doesn't physically exist
// (b) don' have permission to access

// Examples
void foo(){
   int *p; // p has junk value 0x7000
   // What operation on p may cause a segmentation fault
   // A. cout<<p; or p = p+1; // 0x7000 + 4
   // B. cout<<&p; or int **q = &p;
   // C. cout<<*p;  or *p = *p + 1; // correct answer
   // D. None of the above

   int *q = 0;
   cout<< *q; // definite segfault
   *q = *q + 1; // definite segfault
   // Dereferencing a null  pointer will definitely cause segfault
   int x = 0;
   int *w = &x;

   Node *h;
   if(h->next ==0){
      cout<<" There is no next node"<<endl;
   }
   // A. No segfault
   // B. Maybe segfault// correct answer
   // C. Definite segfault

   // If the value of h is null, then 
   // h->data or h->next, will be a definite segfault
   if(!h){
      // do something
   }
   if(h->next == 0){
      // do something else
   }
   if( h && h->next == 0){ // segfault- safe
      // do something
   }

}

// 2. Memory leaks
// Case 1: Create something on the heap,
// lose the pointer to it

void memoryleakExample(){
   Node *p = new Node;
   return;
}

Node* deleteValue (Node* h, int value){
   Node *p = new Node; // memory leak
                       // node is not needed
}

// 3. Dangling pointers: cause memory errors
// Pointer that has a "bad" value
// Bad values are:
// (1) Uninitialized pointer value (junk value)
// (2) address of something that was deleted

void danglingExamples(){
   int *p; // dangling pointer
   p = new Node; // not dangling anymore
   delete p; // p is dangling again
   p = 0; // not dangling anymore
}

//Example of function returning a dangling pointer
Node* createNode(){
   Node n;
   return &n;
}
// Function returning a dangling pointer
int* createArray(int len){
   int arr[len]
   return arr;
}

int* createArrayCorrect(int len){
   int* arr = new int[len];
   return arr;
}
