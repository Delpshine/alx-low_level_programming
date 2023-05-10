#include "main.h"
/**
 * _strlen_recursion - functions that return the legnth of a string
 * @s:The measured string
 *
 * Return:The legnth of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
