#include <stdio.h>

# define SIZE 10

int *insertion_sort(int *arr, int len);
int *bubble_sort(int* arr, int len);
int *selection_sort(int *arr, int len);

int	main(void)
{
	int arr1[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr2[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr3[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr4[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr5[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr6[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr7[SIZE] = {100, 1, 10, 9, 12, 15, 18, 10, 2, 0};
	int arr8[SIZE] = {100, 1, 10, 9, 12, 15, 18, 10, 2, 0};
	int arr9[SIZE] = {100, 1, 10, 9, 12, 15, 18, 10, 2, 0};


	insertion_sort(arr1, SIZE);
	bubble_sort(arr2, SIZE);
	selection_sort(arr3, SIZE);
	printf("\n");
	insertion_sort(arr4, SIZE);
	bubble_sort(arr5, SIZE);
	selection_sort(arr6, SIZE);
	printf("\n");
	insertion_sort(arr7, SIZE);
	bubble_sort(arr8, SIZE);
	selection_sort(arr9, SIZE);
	return (0);
}