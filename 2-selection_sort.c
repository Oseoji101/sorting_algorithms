#include "sort.h"
/**
 * swap - Swap func
 * @a: first num
 * @b: second num
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}

/**
 * selection_sort - selection_sort sort
 * @array: Array
 * @size: Size
 */
void selection_sort(int *array, size_t size)
{
	int checkerminindex;
	int i, j;
	int length = size;

	if (array == NULL || length <= 1)
		return;

	for (i = 0; i < length - 1; i++)
	{
		checkerminindex = i;
		for (j = i + 1; j < length; j++)/* 2 1 8 9 5 0 */
		{
			if (array[checkerminindex] > array[j])
			{
				checkerminindex = j;
			}
		}
		if (checkerminindex != i)
		{
			swap(&array[checkerminindex], &array[i]);
			print_array(array, size);
		}
	}


}
