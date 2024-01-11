#include "main.h"

/**
 * largest_number - fecth the largest of a set of given numbers
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: return the highest of all
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
