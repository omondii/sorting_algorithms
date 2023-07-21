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
