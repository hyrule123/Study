#include <stdio.h>
#include "RUN.h"

int main() {

	int arr[5] = { 2,3,5,4,1 };
	int arrLen = sizeof(arr) / sizeof(int);
	
	//My Selection Sort
	//MySelectionSort(arr, arrLen);
	
	int arr2[5] = { 4,2,7,1,3 };
	int arrLen2 = sizeof(arr2) / sizeof(int);
	//My Insertion Sort
	//MyInsertionSort(arr2, arrLen2);

	//Insertion Sort
	InsertionSort(arr2, arrLen2);
	 


	return 0;
}