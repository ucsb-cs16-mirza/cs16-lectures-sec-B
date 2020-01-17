#include <iostream>
using namespace std;

int global_var = 10;

int sumSeries_1(int n);
double sumSeries_2(int n);

int main(){
	cout<<"sumSeries_1(1): "<<sumSeries_1(1)<<endl;
	cout<<"sumSeries_1(2): "<<sumSeries_1(2)<<endl;
	cout<<"sumSeries_1(3): "<<sumSeries_1(3)<<endl;
	cout<<"sumSeries_1(4): "<<sumSeries_1(4)<<endl;
	cout<<"sumSeries_1(5): "<<sumSeries_1(5)<<endl;
	cout<<"sumSeries_2(2): "<<sumSeries_2(2)<<endl;

    return 0;
}

//1 + 2 + 3 + ....n
int sumSeries_1(int n){
	// n is the parameter of the function
	int result = 0;
	for(int i = 1; i <= n; i++){ //i is the loop variable
		result = result + i;
	}
	//cout<<i; // compiler error because i is only
	         // available within the loop
	return result;
}

//1 + 1/2 + 1/3 + ....1/n
double sumSeries_2(int n){
	double result = 0;
	for(double i = 1; i <= n; i++){ //i is the loop variable
		result = result + 1/static_cast<double>(i);
	}
	return result;
}

