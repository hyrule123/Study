#include <stdio.h>
#include "RUN.h"



void SelectionSort(int * arr, int arrLen) 
{
	for (int i = 0; i < arrLen; i++)
	{
		int tempVal = arr[i];
		int tempIndex;//변환되었을 때 위치를 저장하는 변수
		for (int j = i + 1; j < arrLen;j++)
		{
			if (tempVal > arr[j])//더 작은 값이 있다면
			{
				tempVal = arr[j];//해당 값으로 교체
				tempIndex = j;
			}

		}

		if (tempVal == arr[i])
		{
			break;//temp값 변경이 없었으면 정렬이 완료된 것임
		}
		else//변경이 있었다면 arr[i]와 temp값이 있던 자리를 바꿔 준다
		{
			arr[tempIndex] = arr[i];
			arr[i] = tempVal;
		}
	}

	for (int i = 0; i < arrLen; i++)
	{
		printf("%d, ", arr[i]);
	}
}