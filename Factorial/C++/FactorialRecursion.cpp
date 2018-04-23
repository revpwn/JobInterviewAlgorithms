#include <iostream>
using namespace std;

int factorialRec(int);

int main(){
    cout << "rec 0! = " << factorialRec(0) << endl; // => 1
	cout << "rec 5! = " << factorialRec(5) << endl; // => 120
	return 0;
}

// recursively version
int factorialRec(int num){
	if(num == 0){
		return 1;
	}
	else{
		return num * factorial_rec(num - 1);
	}
}