#include <stdio.h>
/**
 * main - this program prints all possible combination of single-digits number
 *
 * Return: 0;
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar('\n');
	return (0);
}
