#include "sort.h"
/**
 *swap - swaps two values position
 *@a: value 1 (type int)
 *@b: value 2 (type int)
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *bubble_sort - sorts an array by bubbling the biggest number of
 *two to the end of the array
 *@array: list to sort
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i, k;
	bool swapd;

	for (i = 0; i < size - 1; i++)
	{
		swapd = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapd = true;

				for (k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");
			}
		}
		if (swapd == false)
			break;
	}
}
