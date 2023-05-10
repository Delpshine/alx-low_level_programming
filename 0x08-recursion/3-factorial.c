#include "main.h"
/**
 * _factorial - returns the fcatorial of a number
 * @n:The factorial number returned
 *
 * Return: fcatorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
