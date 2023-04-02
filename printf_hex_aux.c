#include "main.h"

/**
 * printf_hex_aux - write prints an hexadecimal numbers.
 * @value:number of arguments.
 * Return:value.
 */
int printf_hex_aux(unsigned long int value)
{
	long int num;
	long int *ptr;
	long int digit = 0;
	unsigned long int tmp = value;

	while (value / 16 != 0)
	{
		value /= 16;
		digit++;
	}
	digit++;
	ptr = malloc(digit * sizeof(long int));

	num = 0;
	while (num < digit)
	{
		ptr[num] = tmp % 16;
		tmp /= 16;
		num++;
	}
	num = digit - 1;
	while (num >= 0)
	{
		if (ptr[num] > 9)
			ptr[num] = ptr[num] + 39;
		_putchar(ptr[num] + '0');
		num--;
	}
	free(ptr);
	return (digit);
}
