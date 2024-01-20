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
 * bubble_sort - bubble sort
 * @array: Array
 * @size: Size
 */
void bubble_sort(int *array, size_t size)
{
	int flag = 1;
	int i;
	int length;

	length = size;

	if (array == NULL || length <= 1)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 1; i < length; i++)
		{
			if (array[i - 1] >  array[i])
			{
				swap(&array[i - 1], &array[i]);
				print_array(array, size);
				flag = 1;
			}
		}

	}


}
