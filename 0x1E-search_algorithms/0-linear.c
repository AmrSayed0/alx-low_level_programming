#include "search_algos.h"

/**
  * linear_search - Performs a linear search for a value in an array of integers.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not found or the array is NULL, return -1.
  *         Otherwise, return the index of the first occurrence of the value.
  *
  * Description: Prints the value of each element in the array as it is compared.
  */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
