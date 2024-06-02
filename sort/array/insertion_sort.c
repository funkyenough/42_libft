#include <stdio.h>

# define SIZE 10


static void print(int *arr, int counter)
{
		printf("Insertion Sort Execution Count: %d\n", counter);
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
		if (i != SIZE - 1)
			printf(", ");
	}
	printf("\n");
}

int *insertion_sort(int *arr, int len)
{
	int	tmp;
	int i;
	int j;
	int counter = 0;

	if (len < 2 || !arr)
		return (void *)0;
	i = 1;
	while (i < len)
	{
		tmp = arr[i];
		counter++;
		j = i;
		while (j > 0 && arr[j - 1] > tmp)
		{
			counter++;
			arr[j] = arr[j - 1];
			counter++;
			j--;
		}
		if (arr[j] > tmp)
		{
			arr[j] = tmp;
			counter++;
		}
		i++;
	}
	print(arr, counter);
	return arr;
}
