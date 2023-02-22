#include "main.h"
/**
 * _abs - returns absolute value of a given input
 *
 * @r: an integer input
 *
 * Return: absolute value of r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
