#include "main.h"
#define NULL 0

/**
 * _strchr - Finds the first occurrence of a char in a string
 * @s: string to search
 * @c: target char
 * Return: pointer to that character in string if found else NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
