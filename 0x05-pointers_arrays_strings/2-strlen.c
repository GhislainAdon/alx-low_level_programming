/*
 * Project : 0. 98 Battery st.
 * Programmer: @Deep Down Craft
 * For ALx School 2022
 */

#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
