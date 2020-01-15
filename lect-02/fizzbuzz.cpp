//fizzbuzz.cpp
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%15 == 0){
        cout<<"fizzbuzz";
    }else if(num%3 == 0){
        cout<<"fizz";
    }else if(!(num%5)){
        cout<<"buzz";
    }else{
        cout<<num;
    }
    cout<<endl;
    /*
    A. Too easy, stop it!
    B. Medium
    C. Difficult
    */
    return 0;
}
