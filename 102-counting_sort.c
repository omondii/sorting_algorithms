#include "sort.h"
/**
 *counting_sort - Implementation of the counting sort algo
 *@array: array to be sorted
 *@size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max = array[0];
	int i;
	size_t j;
	int *count = malloc((max + 1) * sizeof(int));
	int *output = malloc(size * sizeof(int));

	if (count == NULL || output == NULL)
	{
		free(count);
		free(output);
		return;
	}

	for (j = 1; j < size; j++)
	{
		if (array[j] > max)
			max = array[j];
	}

	for (j = 0; j < size; j++)
	{
		count[j] = 0;
	}

	for (i = 0; i < max; i++)
	{
		count[array[i]]++;
	}

	for (i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = size - 1; i >= 0; i--)
	{
		int value = array[i];
		if (value <= max)
		{
			output[--count[array[i]]] = array[i];
		}
	        else
		{
			output[i] = 0;
		}
	}

	for (j = 0; j < size; j++)
	{
		array[j] = output[j];
	}
	free(count);
	free(output);

	print_array(array, size);
}
