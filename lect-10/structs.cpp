#include <iostream>
using namespace std;
// Represent abstract concept in code: 
// Creating your own custome data type using struct
// Idea of a point in 2D 
//        - complex number a + i*b
//        - SuperHero

//Define  a new type using structs

struct Complex{
   // member variables
   double real;
   double imag;
};

struct Point{
   double x; // x coordinate
   double y; // y coordinate 
};

struct Box{
   Point ul;
   double width;
   double height;
};

struct SuperHero{
   string name;
   int power;
   double age;
};

void print(SuperHero s){
   cout<<s.name<<", "
       <<s.power<<", "
       <<s.age<<endl;
} 

void printEfficient(const SuperHero& s){
   cout<<s.name<<", "
       <<s.power<<", "
       <<s.age<<endl;
       //s.age = 10; // compiler won't catch it
} 

void addPower(SuperHero &s, int p){
   s.power +=p;
}

void addMorePower(SuperHero *s, int p){
   //A. s.power += p;
   //B. *s.power += p;
   //C. &s.power += p;
   //D. (*s).power += p; s->power+=p;
   //E. None of the above
   s->power+=p;

}

void printHeros(SuperHero arr[], int len){
   for(int i = 0; i < len; i++){
      print(arr[i]);
   }

}


int main(){
   // Declare variables of type Complex
   Complex c1, c2, c3;
   // Delcare and initialize
   Complex c4 = {10.5, 20.1};
   // member variables of struct can be of
   // different types
   double comp4[] = {10.5, 20.1}; 
   // all the elements of the array have to be
   // of the same type
   SuperHero s1 = {"Superman", 9, 100};
   SuperHero s2 = {"Batman", 9, 200};
   SuperHero s3, s4;

   // Re-assigning values
   // Access member vaiables of a struct
   // using the dot operator
   s1.power = 10;
   s3 = {"Catwoman", 8, 250}; //Reassigning values for the entire struct
                              //C++11 syntax
   s4 = s3; //Assignment works!
   if(s1.power == s2.power){ // this is okay
      cout<<s1.name << " and "<< s2.name 
      <<" have the same power!\n";
   }
   // but the following will not work by default
   /*if(s1 == s2){ // this will NOT compile
      cout<<s1.name << " and "<< s2.name 
      <<" have the same power!\n";
   }*/
   cout<<"\nPrint using pass by value\n";
   print(s1); // pass by value
   cout<<"\nPrint using pass by reference\n";
   printEfficient(s1); // pass by reference
   addPower(s2, 1); // pass by reference
   // A.
   /*addMorePower(s1, 1); //pass by s2 by address
   //B. 
   addMorePower(&s1, 1);
   //C. 
   addMorePower(*s1, 1);*/

   SuperHero arr[]={s1, s2, s3};
   cout<<"\nPrint all the super heros"<<endl;
   printHeros(arr, sizeof(arr)/sizeof(SuperHero));

   cout<<"\nPrint the last two super heros"<<endl;
   printHeros(arr+1 , 2);


         




   return 0;
}