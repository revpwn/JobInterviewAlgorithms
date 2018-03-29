int factorial(int num){
	int total = 1;
	for(int i = num; i > 1; i--){
		total *= i;
	}
	return total;
}
