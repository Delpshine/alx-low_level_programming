#include "main.h"
/*
 * -memcpy.c - a function that copies memory area
 *  @dest: memory where its stored
 *  @src: memory from where it is copied
 *  @n: number of bytes
 *
 *  Return: copied memory with changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		 n--;
	}
	return (dest);
}
