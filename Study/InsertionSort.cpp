#include <stdio.h>
#include "RUN.h"

void InsertionSort(int* arr, int arrLen)
{
	for (int i = 1; i < arrLen; i++)
	{
		int indexPos = i;
		int temp = arr[i];

		while (temp < arr[indexPos - 1] && indexPos >= 0)
		{
			arr[indexPos] = arr[indexPos - 1];
			indexPos -= 1;
		}

		arr[indexPos] = temp;

	}

	for (int i = 0; i < arrLen; i++)
	{
		printf("%d, ", arr[i]);
	}
}