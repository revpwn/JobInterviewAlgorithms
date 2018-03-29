int factorial(int num){
	// Default cases - Both 0! & 1! will return 1
	if(num == 0 || num == 1){
		return 1;
	}
	int total = 1;
	for(int i = num; i > 1; i--){
		total *= i;
	}
	return total;
}
