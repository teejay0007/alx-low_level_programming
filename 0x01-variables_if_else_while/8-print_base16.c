#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
