#include "main.h"

/**
 * printf_char - write a program that prints a chararacter.
 * @value: arguments printed.
 * Return: 1.
 */
int printf_char(va_list value)
{
	char str;

	str = va_arg(value, int);
	_putchar(str);
	return (1);
}
