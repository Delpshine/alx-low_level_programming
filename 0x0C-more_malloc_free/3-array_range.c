#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum range of value stored.
 * @max: maximum value of number of element.
 * 
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	
	int i size;
	
	 if (min > max)
		 return (NULL);
	 size = max - min + 1;
	 ptr = malloc(sizeof(int) * size);

	 if (ptr == NULL)
		 return (NULL);
	 for (i = 0; min <= max; i++)
		 ptr[i] = min++;

	return (ptr);
}

