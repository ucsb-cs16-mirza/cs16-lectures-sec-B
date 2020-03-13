#include <iostream>
using namespace std;
// given an array and a value, return the index of
// the element with that value  (if the value exists
// in the array), otherwise, return -1

int binarySearch(int arr[], int value, int lo, int hi ){
      
      if(lo > hi){
         return -1;
      }
      // Case 1: One-element array
      if(lo == hi){ 
         if(arr[lo] != value){
            return -1;
         }
      }
      //Case 2: Mid element matches the value we are looking for
      int mid = (lo+hi)/2; //1
      if(arr[mid] == value){
         return mid;
      }
      if(value < arr[mid]){
         //serach to the left of mid
         // example: 10, 20, 30     v = 10
         return binarySearch(arr, value, lo, mid-1);
      }else{
         return binarySearch(arr, value, mid+1, hi); //mid = 0, hi = 1
      }
}

int main(){
   //create a new linked list
   int arr[]={10, 20, 30, 40, 50, 60, 88, 100};
   cout<< binarySearch(arr, 30, 0, 7 )<<endl;
   cout<< binarySearch(arr, 101, 0, 7 )<<endl;
   cout<< binarySearch(arr, 5, 0, 7 )<<endl;
   cout<< binarySearch(arr, 44, 0, 7 )<<endl;
   cout<< binarySearch(arr, 88, 0, 7 )<<endl;
   return 0;
}