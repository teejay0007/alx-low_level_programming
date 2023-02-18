#include <stdio.h>
/**
 * main - lower case with putchar
 *
 * Description: this programs prints lower case letters
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
		putchar(c);

	putchar('\n');
	return (0);
