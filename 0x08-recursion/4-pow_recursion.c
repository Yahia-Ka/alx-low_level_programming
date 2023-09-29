#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: number value
 * @y: number power
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
