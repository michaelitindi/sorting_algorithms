#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - sorts in ascending order
 * @array: the array
 * @size: its size
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
int temp, swap;
size_t i, j;

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
swap = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swap = 1;
print_array(array, size);
}
}
if (!swap)
{
break;
}
}
}
