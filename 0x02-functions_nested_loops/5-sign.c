#include "main.h"
/**
 * print_sign- this program prints the sign of a number
 *
 * @n: the input number
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
	return (0);
}

