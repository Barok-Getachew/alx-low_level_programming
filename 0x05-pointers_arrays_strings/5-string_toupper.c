#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters to upper
 * @s: String being altered
 *
 * Return: Converted string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] == ' ' || (s[i] >= 'A' && s[i] <= 'Z')
			|| (s[i] >= 'a' && s[i] <= 'z'); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ' ';
	return (s);
}
