#include "sort.h"
void quick_sort(int *array, size_t size);
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
 * partition - quick array
 * @array: ===
 * @low: ==
 * @high: ===
 * @size: =i===
 * Return: int
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j = low;
	int pivotindex = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (pivotindex < j)
			{
				swap(&array[pivotindex], &array[j]);
				print_array(array, size);
			}
			pivotindex++;
		}
	}

	if (array[pivotindex] > pivot)
	{
		swap(&array[pivotindex], &array[high]);
		print_array(array, size);
	}
	return (pivotindex);

}

/**
 * quick_sort_helper  - quick array
 * @array: ===
 * @low: ==
 * @high: ===
 * @size: ====
 */
void quick_sort_helper(int *array, int low, int high, int size)
{
	int pivotindex;

	if (low < high)
	{
		pivotindex = partition(array, low, high, size);
		quick_sort_helper(array, low, pivotindex - 1, size);
		quick_sort_helper(array, pivotindex + 1, high, size);
	}


}
/**
 * quick_sort - quick array
 * @array: ===
 * @size: ====
 */
void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);


}
