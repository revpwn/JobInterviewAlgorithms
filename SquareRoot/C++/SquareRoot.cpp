#include <iostream>
using namespace std;

double sqrt(double);

int main(){
	// This should output 12
	cout << sqrt(144) << endl;
	return 0;
}

double sqrt(double num){
	// r = root
	// a = change to root
	double a = 0;
	double r = 1.0;
	while (((r * r) - num) > 0.0001 || ((r * r) - num) < -0.0001){
		r -= a;
		a = ((r * r) - num) / num;
	}
	return r;
}
