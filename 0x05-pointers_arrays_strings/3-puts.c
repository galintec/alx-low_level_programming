#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by new line
 * @str: string to print
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(str++);
}
	_putchar('\n');
}
