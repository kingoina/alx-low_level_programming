#include "main.h"

/**
 * swap_int - interchaanges the values of two intergers
 *@a: points to the first value
 *@b: points to the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
