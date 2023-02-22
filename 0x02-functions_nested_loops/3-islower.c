#include "main.h"
/**
 *_islower - this program  checks for lower case character
 * @c: an input chaacter
 * Return: returns 1 if c is lowercase else 0 otherwise
 */
int _islower(int c)
{
	char k;
	int islow = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			islow = 1;
	}
	return (islow);
}
