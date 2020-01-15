#include <iostream>
using namespace std;
/*
- Data types and variables
*/
int main(){
    int x; //variable declaration
    x = 10;
    int y = 0; // initialize
    string name = "Jill";
    char ch = 'a';
    bool result;
    double pi = 3.14;
    string s = "";
    result = y == 0;
    result = y != 0;
    result = x; // result is true
    result = x < 5; // false
    /* Logicall operators */
    /* && (AND), || (OR), ! (NOT)*/
    result = (x && (x < 5));
    
    /* In C++, (integers)
         0: false
         every other value: true
    */
    if( x < 0 )
    {
       cout<<"x is negative";
    }else
    {
       cout<<"x is not negative";
    }
    x = x % 5;
    return 0;
}