#include "search_algos.h"
/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value) 
{
size_t left =  0;
size_t right = size -  1;

while (right >= left) 
{
size_t mid = left + (right - left) /  2;

if (array[mid] == value) 
{
return mid;
}
if (array[mid] > value) 
{
right = mid -  1;
}
else 
{
	left = mid +  1;
}
}
	return (-1);
}
