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
int main(){
	string name1 = "Grace"; // string
	char name2[] = {'G','r','a','c','e'}; // Raw char array
	char name3[] = "Grace";
	// One key difference between name2 and name3 is that
	// name3 has one more element than name2. The last 
	// element, name3[4] is a zero, also called a null terminator

	char country[] = "USA"; 
	cout<<country<<endl;
	/*
	A. "USA" // Answer
	B. Some memory location
	Note that only in the case of char arrays and C-strings
	cout will print all the elements of the array instead
	of just printing the base address.
	Notice that this behavior is different when we try to print
	an array of integers below
	*/

	int arr[] = {1, 2, 3};
	cout<<arr<<endl;// Prints the base address


	//C-string is a char array where the last element is a null
    name1 = name1 + " Hopper";
	cout<< "Use string.length() to get the length of a string\n "
		<<" Length of "<<name1 <<" is: "<<name1.length()<<endl;
	cout<<"Use sizeof() to get the size of an array in bytes\n"
		<<"To get the length of the array, divide the total size"
		<<" by the size of each element\n"
		<<" Length of "<<name3<<" is: "
		<<sizeof(name3)/sizeof(char)<<endl;
	
	for(int i=0; i<=name1.length(); i++){
		cout<<name1[i];
		if(name1[i] == 0){
			cout<<"\nReached the end of the string"<<endl;
		}
	}
    cout<<endl;
	string name = "Jill";
	name = name + "& Jack";
	cout<<"Length of string is: "<<name.length()<<endl;
	
	char raw[] = {'J','i','l','l'}; //char array
	char raw2[] = "Jill"; //c-string: char array that end with a null
	cout<<raw<<endl;
	cout<<raw2<<endl;
	cout<<raw2[2]<<endl;
	return 0;
}

