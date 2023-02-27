#include "main.h"
/**
 * swap_int - this program swaps the value of two integers
 *
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
