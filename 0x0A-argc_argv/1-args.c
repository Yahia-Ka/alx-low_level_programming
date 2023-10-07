#include "main.h"
#include <stdio.h>

/**
 * main - print the num of args you passed into it followe by a new line
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
