#include <stdio.h>

/**
 * main - Print the name of the file it is compiled from
 * Return: 0;
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
