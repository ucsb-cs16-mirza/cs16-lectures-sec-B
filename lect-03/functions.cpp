#include <iostream>
using namespace std;

void printHello(); //delcare the function
string retHello();

int main(){
    string getResult; //delcare your variables
    printHello();
    cout<<getResult;
    getResult= retHello() + " CS16";
   // getResult = getResult + " CS16";   
    cout<<getResult<<endl;
    return 0;
}

void printHello(){ //define the function
    cout<<"Hello\n";
}

string retHello(){ //define the function   
    return "Hello";
}

