#include "main.h"
/**
 * _factorial - returns the fcatorial of a number
 * @n: number to return the factorial from
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
