#include <iostream>
using namespace std;

//Practice with nested loops
// Testing! In life there is no gradscope!
//unit testing - tests a single function

/*
1. Write the stub function
2. Write a test harness or test suite
3. Compile and run the code - see the test cases fail!
4. Iteratively write code for the function and more test code
*/
string drawSquare(int width){
	string result="";
	for(int row = 0; row <width; row++){
		//code to print each row
		for(int col = 0; col < width; col++){
			result = result + "*" ;// cout<<"*";
		}
		result+="\n";//cout<<endl;
	}
	return result;
}
string drawRightSquare(int width){
	string result="";
	for(int row = 0; row <width; row++){
		//code to print each row
		for(int col = 0; col < width; col++){
			if(row >= col){
				result = result + "*" ;// cout<<"*";
			}else{
				result = result + "-" ;// cout<<"*";
			}
		}
		result+="\n";//cout<<endl;
	}
	return result;
}
string drawTriangle(int width){
	string result="";
	if(width%2 == 0) {
		return result;
	}
	int height = (width+1)/2;
    int numSpaces = (width-1)/2;
    int numStars = 1;
	for(int row = 0; row <width; row++){
		//code to print each row
		for(int i = 0; i< numSpaces; i++){
			result+="-";
		}
		for(int i = 0; i< numStars; i++){
			result+="*";
		}
		for(int i = 0; i< numSpaces; i++){
			result+="-";
		}
		numSpaces--;
		numStars+=2;
	}
	result+="\n";//cout<<endl;
	}
	return result;
}

string drawZ(int width){
	string result = "";
	for(int row = 0; row <width; row++){
		//code to print each row
		for(int col = 0; col < width; col++){
			if(row == 0 || row == (width-1) || (row+col == width-1)){
				result = result + "*" ;// cout<<"*";
			}else{
				result = result + "-" ;// cout<<"*";
			}
		}
		result+="\n";//cout<<endl;
	}
	return result;
}
//test suite
void test_drawRightSquare(){
	cout<<"drawRightSquare(1):\n"<<drawRightSquare(1)<<endl;
	cout<<"drawRightSquare(2):\n"<<drawRightSquare(2)<<endl;
	cout<<"drawRightSquare(3):\n"<<drawRightSquare(3)<<endl;
	cout<<"drawRightSquare(4):\n"<<drawRightSquare(4)<<endl;
	cout<<"drawRightSquare(5):\n"<<drawRightSquare(5)<<endl;
}

void test_drawSquare(){
	cout<<"drawSquare(1):\n"<<drawSquare(1)<<endl;
	cout<<"drawSquare(2):\n"<<drawSquare(2)<<endl;
	cout<<"drawSquare(3):\n"<<drawSquare(3)<<endl;
	cout<<"drawSquare(4):\n"<<drawSquare(4)<<endl;
	cout<<"drawSquare(5):\n"<<drawSquare(5)<<endl;
}

int main(){
	test_drawSquare();

    return 0;
}


