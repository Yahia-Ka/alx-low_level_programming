#include "holberton.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = len(s) - 1;

	return (palindrom(s, --length));
}

/**
 * len - gets length of string
 * @s: string
 * Return: return length of string
 */

int len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + len(++s));
}

/**
 * palindrom - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int palindrom(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (palindrom(++s, l - 2));
	}
	else
		return (0);
}
