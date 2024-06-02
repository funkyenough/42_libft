#include <stdio.h>

#define SIZE 10

static void print(int *arr, int counter)
{
		printf("Bubble Sort Execution Count: %d\n", counter);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
		if (i != SIZE - 1)
			printf(", ");
	}
	printf("\n");
}

static void	swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int *bubble_sort(int* arr, int len)
{
	int i;
	int j;
	int counter = 0;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				counter++;
			}
			counter++;
			j++;
		}
		i++;
	}
	print(arr, counter);
	return arr;
}