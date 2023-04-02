#include "main.h"

/**
 * printf_integer - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_integer(va_list args)
{
	int x = va_arg(args, int);
	int nums, last = n % 10, digit, exp = 1;
	int  i = 1;

	x = x / 10;
	nums = x;

	if (last < 0)
	{
		_putchar('-');
		nums = -nums;
		x = -x;
		last = -last;
		i++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			exp = exp * 10;
			nums = nums / 10;
		}
		nums = x;
		while (exp > 0)
		{
			digit = nums / exp;
			_putchar(digit + '0');
			nums = nums - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
