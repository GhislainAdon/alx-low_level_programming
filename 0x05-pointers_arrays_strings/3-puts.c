/*
 * Project : 0x05 .
 * Programmer: @Deep Down Craft
 * For ALx School 2022
 */

#include "main.h"
/**
 * _puts - Prints a string .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
