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

	printf("size of char: %lu byte(s)\n", (unsigned long)Sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)Sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)Sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)Sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)Sizeof(f));
	return (0);
}
