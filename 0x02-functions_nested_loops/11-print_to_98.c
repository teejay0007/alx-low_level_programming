#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
