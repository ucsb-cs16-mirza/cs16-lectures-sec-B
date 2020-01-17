#include <iostream>
#include <cstdlib>
using namespace std;

int global_var = 10;

double sumSeries_2(int n);

int main(int numParams, char* params[]){
	// Think of char* as string
	// params is a list of strings
    /*
	int n = 0;
	cout<<"Enter a value for n: ";
	cin>>n;
    */	
    cout<<"No. of params to main: "<<numParams<<endl;
	for( int i = 0; i < numParams; i++){
		cout<<params[i]<<endl;
	}
	cout<<"end of for loop"<<endl;

	int n = atoi(params[1]);

	cout<<"sumSeries_2("<<n<<"): "<<sumSeries_2(n)<<endl;

    return 0;
}


//1 + 1/2 + 1/3 + ....1/n
double sumSeries_2(int n){
	double result = 0;
	for(double i = 1; i <= n; i++){ //i is the loop variable
		result = result + 1/static_cast<double>(i);
	}
	return result;
}

