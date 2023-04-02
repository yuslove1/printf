#include "main.h"
/**
 * printf_exclusive_string - print exclusive string.
 * @value: argument.
 * Return: the length of a string.
 */

int printf_exclusive_string(va_list val)
{
	char *str;
	int l, lens = 0;
	int cass;

	str = va_arg(value, char *);
	if (str == NULL)
		str = "(null)";
	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] < 32 || str[l] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lens = lens + 2;
			cass = str[l];
			if (cast < 16)
			{
				_putchar('0');
				lens++;
			}
			lens = lens + printf_HEX_aux(cass);
		}
		else
		{
			_putchar(str[l]);
			lens++;
		}
		l++;
	}
	return (lens);
}
