#include <stdio.h>
/**
 * main - prints all letters except q and e
 *
 * Description: this programs print all alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}

	putchar('\n');
	return (0);
}
