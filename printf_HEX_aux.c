#include "main.h"

/**
 * printf_HEX_aux - write a program prints an hexadecimal number.
 * @value: number to be printed.
 * Return: digit.
 */
int printf_HEX_aux(unsigned int value)
{
	int num;
	int *ptr;
	int digit = 0;
	unsigned int tmp = value;

	while (value / 16 != 0)
	{
		value /= 16;
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
