#include "holberton.h"

/**
 * _strlen_b - Returns length of a string
 * @s: Pointer to a string
 *
 * Return: Length of string
 * 0 if any char is not 0 or 1
 */
unsigned int _strlen_b(const char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) != '0' && *(s + i) != '1')
			return (0);
		++i;
	}
	return (i);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number
 * 0 if there is one or more chars in the string that is not 0 or 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l;
	unsigned int n = 0;
	unsigned int base_val = 1;

	if (b)
		l = _strlen_b(b);
	while (l)
	{
		if (*(b + l - 1) == '1')
			n += base_val;
		base_val *= 2;
		--l;
	}
	return (n);
}
