#include <iostream>

using namespace std;

// iterative version
int factorialIter(int num){
	int total = 1;
	for (int i = num; i > 1; i--){
		total *= i;
	}
	return total;
}


// Test program
int main(){
	cout << "iter 0! = " << factorialIter(0) << endl; // => 1
	cout << "iter 5! = " << factorialIter(5) << endl; // => 120
	return 0;
}