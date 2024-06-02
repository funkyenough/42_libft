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

// static void print_helper(int *arr, int len, int increment)
// {
// 	printf("i = %d: ", increment);
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d", arr[i]);
// 		if (i != len - 1)
// 			printf(", ");
// 	}
// 	printf("\n");
// }
static void	swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int *selection_sort(int *arr, int len)
{
	int *min = NULL;
	int i;
	int j;
	int counter = 0;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j < len)
		{
			if (min == NULL || *min > arr[j])
				min = &arr[j];
			j++;
		}
		// print_helper(arr, len, i);
		swap(min, &arr[i]);
		i++;
		min = NULL;
	}
	print(arr, counter);
	return arr;
}

// int	main(void)
// {
// 	int arr3[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// 	int arr9[SIZE] = {100, 1, 10, 9, 12, 15, 18, 10, 2, 20};
// 	selection_sort(arr3, SIZE);
// 	selection_sort(arr9, SIZE);
// 	return (0);
// }