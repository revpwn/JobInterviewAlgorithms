//  Copyright © 2018 Austin Tice. All rights reserved.
/*
This is a classic algorithm that you will find in job interviews where you will be asked the
following.
 1. Print out numbers from 1-100.
 2. Print out "FIZZ" for every 3rd number.
 3. Print out "BUZZ" for every 5th number.
 4. Print out "FIZZBUZZ" for every 15th number.

 This is my solution written in C++. I basically, as you can see, wrote a for loop and had
 some conditionals that check the modulus (remainder) and make sure it's equal to 0.

 If you have any other languages you would like to submit this in feel free to do so. Just
 submit a pull request.
*/
#include <iostream>

int main() {
	for(int i = 1; i <= 100; i++){
		if(i % 15 == 0){
			std::cout << "FIZZBUZZ" << std::endl;
		}
		else if(i % 3 == 0){
			std::cout << "FIZZ" << std::endl;
		}
		else if(i % 5 == 0){
			std::cout << "BUZZ" << std::endl;
		}
		else{
			std::cout << i << std::endl;
		}
	}
	return 0;
}
