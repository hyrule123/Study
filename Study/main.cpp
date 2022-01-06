#include <stdio.h>
#include "RUN.h"

int main() {
	int arr[5] = { 2,3,5,4,1 };
	int arrLen = sizeof(arr) / sizeof(int);

	SelectionSort(arr, arrLen);
	return 0;
}