#include <iostream>
using namespace std;
// References: Nicknames for other variables
// Modify variables that are outside the scope of a function
// Pointers: Similar to references except
// - A pointer is a separate entity
// New topic: 
// * Arrays in C++: Python: lists
// * Arrays are related to pointers
// * char arrays vs c-strings vs strings

void printArray(int arr[], int len){
	// When an array is passed into a function,
	// the elements of the array are NOT copied
	// into a new array, instead we only pass in 
	// the base address of the array (address of
	// the element 0) and that address is stored in
	// a simple pointer. So the parameter arr, in
	// this case is just a pointer (you could have 
	// declared it as (int *arr)
	// One consequence is that we can no longer
	// use the range based for loop to iterate through
	// the array
	// The following code will NOT work
	/*
	for(int item:scores){
		cout<<item<<" "; // prints each element of the array
	}
    cout<<endl;*/

	// But we can still use the regular for loop
	for(int i=0; i<len; i++){
		cout<<arr[i]<<" "; // *(arr+i)
	}


}
int main(){
	int scores[]={10, 50, 90, 100};// Declare and initialize
	// an array - scores.
	//
	// The value of the variable scores is the memory address 
	// of element 0 i.e. element with value 10. 
	// Writing scores is the same as writing &scores[0]
	// In this sense the array name scores is very much like a 
	// pointer, with the key distinction that we cannot 
	// reassign the array to some other memory location
	// For example, scores = scores + 1; would result in a
	// compiler error. However, in general, we can always
	// reassign the value of a pointer as follows:
	int *q = scores; // Note that pointers and arrays are related
	                 // After this statement q points to element 0:
					 // scores[0]

	cout<<scores<<endl; // Prints the address of element 0 
					    // Also called the base address of the array
	// To solve problems involving arrays we need to be able to
	// iterate through the array
	// Three ways of iterating through an array
	// First way:
	// Use a for loop with the loop variable 'i' representing
	// the index of an element in the array
	for(int i=0; i<4; i++){
		cout<<scores[i]<<" ";
	}
    cout<<endl;

	// Second way:
	// Same as first but this time use a pointer that was 
	// initialized to point to element 0
	for(int i=0; i<4; i++){
		cout<<q[i]<<" "; // Compiler reads this as *(q+i)
		                 // q+i: here we are doing pointer arithmetic
						 //
	}
    cout<<endl;


	// Third way:
	// C++ 11 range based for loop
	// This only works for "iterable" structures like arrays
	// You can't use this if scores was a pointer
	for(int item:scores){
		cout<<item<<" "; // prints each element of the array
	}
    cout<<endl;


	// C++ 11 range based for loop to modify the array
	// Note the loop variable item is a reference in this case
	for(int &item:scores){ //item is a reference
		item = 10; //modifies elements of the array 
	}

	return 0;
}

