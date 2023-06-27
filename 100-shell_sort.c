#include <stdio.h>
#include "sort.h"


/**
 * shell_sort - uses shell sort
 * @array: the array
 * @size: its size
 */


void shell_sort(int *array, size_t size)
{
size_t ivl, i, j;
int temp;
while (ivl < size / 3)
{
ivl = ivl * 3 + 1;
}
while (ivl > 0)
{
for (i = ivl; i < size; i++)
{
temp = array[i];
j = i;
while (j >= ivl && array[j - ivl] > temp)
{
array[j] = array[j - ivl];
j -= ivl;
}
array[j] = temp;
}
print_array(array, size);
ivl = (ivl - 1) / 3;
}
}
