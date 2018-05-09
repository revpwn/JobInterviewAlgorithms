#include <iostream>

void sortArray(int[], int);
void swap(int*, int*);
int binarySearch(int arr[], int, int);

int main(){
	// Initialize array of arbitrary data
	int test[5] = {6,4,7,8,3};

	// We need to sort the array that was just processed - this algorithm uses bubble sort.
	sortArray(test, sizeof(test)/sizeof(test[0]));

	std::cout << "Binary Search - Position where value was found = "
	<< binarySearch(test, 7, sizeof(test)/sizeof(test[0])) << std::endl;
	return 0;

	/* ----- TEST CASES -----
		int test[5] = {6,4,7,8,3} => binarySearch(test, 4, 5) => | pos = 1 |
		int test[5] = {6,4,7,8,3} => binarySearch(test, 8, 5) => | pos = 4 |
		int test[5] = {6,4,7,8,3} => binarySearch(test, 1, 5) => | pos = -1 |
	*/
}

int binarySearch(int arr[], int value, int size){
	// first element we choose to search with.
	int first = 0;
	// last element we search with.
	int last = size - 1;
	bool found = false;
	// Current position in the array - or return -1 if not found.
	int pos = -1;
	// Refers to the middle value of the array that we calculate below.
	int middle = 0;

	while(found != true && first <= last){
		//Determines the middle value, and since it is an int it will truncate any decimal values.
		middle = (first+last)/2;
		if(arr[middle] == value){
			found = true;
			pos = middle;
		}
		/*
		 if the current iteration of middle is greater than the value we're searching for(since we
		 assume that the array we're searching has already been sorted) we want the last value to
		 equal the index just before where we just checked. This is because we know that the value
		 cannot be after that. (REMEMBER: This only works if the array has already been sorted).
		 */
		else if(arr[middle] > value){
			last = middle -1;
		}
		/*
		 Refer to comment directly above the 'else-if' that represents the same logic,
		 but for the first value instead of the last.
		 */
		else {
			first = middle +1;
		}
	}
	// The value we want to return is the index(pos) where the value we're looking for was found.
	return pos;
}

/*
We're calling this function via the bubbleSort() - it allows us to
swap the addresses of the current 2 elements being compared via pointers.
*/
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

// This function implements the bubble sort algorithm technique.
void sortArray(int arr[], int size){
	for (int i = 0; i < size-1; i++)
		for (int j = 0; j < size-i-1; j++)
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}
