#include "main.h"
/**
 * _isalpha - this program checks for alphabetic character
 *
 * @c: an input character
 *
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	char k;

	int lowerUpper = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			lowerUpper = 1;
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		if (k == c)
			lowerUpper = 1;
	}
	return (lowerUpper);
}
