#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void swap(int *t1, int *t2)
{
	int t3 = *t1;
	*t1 = *t2;
	*t2 = t3;
}

//÷±Ω”≤Â»Î≈≈–Ú
void StraightInsertionSort(int a[], int length)
{
	for (int i = 0;i < length - 1;++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
	
}



//œ£∂˚≈≈–Ú
void ShellSort(int a[], int length)
{
	int gap = length;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0;i < length - gap;++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;

			}
			a[end + gap] = tmp;
		}
	}
	
	
}







