#include <stdio.h>
#include "RUN.h"

void MyInsertionSort(int* arr, int arrLen)
{
	for (int i = 1; i < arrLen; i++)
	{
		int temp = arr[i];
		int tempIndex;
		bool isChanged = false;
		for (int j = i - 1; j >= 0; j--)
		{	
			if (temp < arr[j])
			{
				tempIndex = j;
				arr[j + 1] = arr[j];
				isChanged = true;
			}
			else
			{
				break;
			}

		}
		
		if (isChanged == true)
		{
			arr[tempIndex] = temp;
		}
		else
		{
			arr[i] = temp;
		}
		
	}

	for (int i = 0; i < arrLen; i++)
	{
		printf("%d", arr[i]);
	}
	
	
}