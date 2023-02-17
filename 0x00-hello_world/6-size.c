#include <stdio.h>
/**
 * main - prints sizes of data types
 *
 * Description: this programs prints sizes of different data types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	Printf("Size of char: %lu byte(s)\n", (unsigned long)Sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)Sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)Sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)Sizeof(d));
	printf("Size of float: %lu byte(s)\n", (unsigned long)Sizeof(f));
	return (0);
}
