#include "main.h"
/**
 * _isupper - this program checks for uppercase character
 *
 * @c: the input to be checked
 *
 * Return:0
 */

int _isupper(int c)
{
	int myVal = 0;

	if (c >= 'A' && c <= 'Z')
	{
		myVal = 1;
	}
	return (myVal);
}
