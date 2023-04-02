#include "main.h"

/**
 * printf_integer - write a program that prints integer
 * @args: argument printed
 * Return: number of characters to print
 */
int printf_integer(va_list args)
{
	int x = va_arg(args, int);
	int nums, last = n % 10, digit, exp = 1;
	int  l = 1;

	x = x / 10;
	nums = x;

	if (last < 0)
	{
		_putchar('-');
		nums = -nums;
		x = -x;
		last = -last;
		l++;
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
			l++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - write a program that prints decimal
 * @args: argument to printed
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int x = va_arg(args, int);
	int nums, last = n % 10, digit;
	int  l = 1;
	int exp = 1;

	x = x / 10;
	nums = x;

	if (last < 0)
	{
		_putchar('-');
		nums = -nums;
		x = -x;
		last = -last;
		l++;
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
			l++;
		}
	}
	_putchar(last + '0');

	return (l);
}
