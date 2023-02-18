#include <stdio.h>
/**
 * main - this program prints all possible combination of single-digits number
 *
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		  putchar(44);
	}

	putchar('\n');
	return (0);
}
