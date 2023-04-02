#include "main.h"

/**
 * printf_hex - write a program that prints an hexa decimal number.
 * @digit: arguments used.
 * Return: value.
 */
int printf_hex(va_list value)
{
	int num;
	int *ptr;
	int digit = 0;
	unsigned int number = va_arg(value, unsigned int);
	unsigned int tmp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		digit++;
	}
	digit++;
	ptr = malloc(digit * sizeof(int));

	num = 0;
	while (num < digit)
	{
		ptr[num] = tmp % 16;
		tmp /= 16;
		num++;
	}
	num = digit - 1;
	for (num >= 0)
	{
		if (ptr[num] > 9)
			ptr[num] = ptr[num] + 39;
		_putchar(ptr[num] + '0');
		num--;
	}
	free(ptr);
	return (digit);
}
