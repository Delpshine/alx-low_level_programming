#include "main.h"
/**
 * print_alphabet_x10 - Prints the alpha 10 times.
 */
void print_alphabet_x10(void)
{
	int ten;
	int j;

	for (ten = 0; ten <= 9; ten++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
