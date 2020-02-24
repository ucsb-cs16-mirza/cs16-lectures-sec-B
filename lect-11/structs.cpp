#include <iostream>
using namespace std;
// Create our own custom data type: struct
// * Represent different abstract concepts in code
/*   - Complex numbers
     - student
     - Super hero
*/
// a + i*b 
// definition for type Complex
struct Complex{
   //member variables of this struct
   double real;
   double imag;
};
// Member variables of a struct
// can be of different types

struct SuperHero{
   string name;
   int power; // a number from 1 to 10
   double age; 
};

bool operator==(SuperHero s1, SuperHero s2){
   return s1.name == s2.name && 
          s1.power == s2.power && 
          s1.age == s2.age;
}

void print(const SuperHero& s){
   cout<<s.name<<", "<<s.power<<", "<<s.age<<endl;
   // s.name = "Batman"; could have a bug like this
   // and the compiler won't catch it
}

void init(SuperHero& s, string sname, int x, double y){
    s = {sname, x, y};
}

void initByAddress(SuperHero *s, string sname, int x, double y){
    // *s = {sname, x, y}; // This works
    (*s).name = sname; // s->name = sname;
    (*s).power = x;
    (*s).age = y;
}

void printHeros(SuperHero s[], int len){
   for(int i =0; i < len; i++ ){
      print(s[i]); // s[i] : compiler reads
                  // *(s+i)
      cout<<endl;
   }


}
// print(s1); pass by reference
int main(){
   Complex c1, c2; // declare variables of type Complex
   double comp[2];
   SuperHero s1 = {"Superman", 10, 200};
   SuperHero s2 = s1, s3 = s1;
   SuperHero thegang[]={s1, s2, s3};
   printHeros(thegang, 3);
   //comparing structs  
   if(s1 == s2){ // as such its not going to work
      cout<<"Super heros are the same!"<<endl;
   }
   // Assignment works by default
   s2 = s1;
   // Older C++ before c++11
   // Re-assigning values to the struct
   // has to be done one element at a time
   s2.name = "Catwoman";
   s2.power = 10;
   s2.age = 100;

   // C++ 11 way

   init(s2,"Catwoman", 10, 100); // pass by reference

   // Pass by address
   initByAddress(&s2,"Catwoman", 10, 100); // pass s2
                                         // by address

   string ss1= "Diba", ss2= " Mirza";
   ss1 = ss1 + ss2; // operator overloading in C++
   // + operator, and other operators like
   // ==, <, > will not work for SuperHero by
   // default

   // Passing structs to functions
   // Pass by value
   print(s1); // pass by value

  





   return 0;
}