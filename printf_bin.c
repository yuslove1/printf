#include "main.h"

/**
 * printf_bin - write a program that prints a binary number.
 * @value: arguments printed.
 * Return: 1.
 */
int printf_bin(va_list value)
{
	int flags = 0;
	int constant = 0;
	int i, a = 1, b;
	unsigned int nom = va_arg(value, unsigned int);
	unsigned int pat;

	for (i = 0; i < 32; i++)
	{
		pat = ((a << (31 - i)) & nom);
		if (pat >> (31 - i))
			flags = 1;
		if (flags)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			constant++;
		}
	}
	if (constant == 0)
	{
		constant++;
		_putchar('0');
	}
	return (constant);
}
