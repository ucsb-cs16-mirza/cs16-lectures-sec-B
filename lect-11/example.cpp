#include <iostream>
using namespace std;

int getInt(){
	int x = 5;
	return x;
}
int* getAddressOfInt(){
	int x=10;
	return &x;
}
int main(){
    int y=0, *p=nullptr, z=0;
    y = getInt();
    p = getAddressOfInt();  // p stores the address of a local variable
    z = *p; // local variables are removed from the stack
            // after the function returns although they might temporarily
            // be there until the next function call over writes their value
    cout<<y<<", "<<z<<", "<<*p<<endl;
            // No guarantee that *p is 10 at this point
            // x is likely overwritten with some other value
}