#include "main.h"
/**
 * _isdigit - this programs checks  for digits from 0 through 9
 *
 * @c: input
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
