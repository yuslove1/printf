#include "main.h"

/**
 * printf_HEX - write a program prints hexgecimal number.
 * @value: arguments printed.
 * Return: digit.
 */
int printf_HEX(va_list value)
{
	int num;
	int *ptr;
	int digit = 0;
	unsigned int value = va_arg(value, unsigned int);
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
	num = counter - 1;
	while (num >= 0)
	{
		if (ptr[num] > 9)
			ptr[num] = ptr[num] + 7;
		_putchar(ptr[num] + '0');
		num--;
	}
	free(ptr);
	return (digit);
}
