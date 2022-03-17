#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

// #include "main.h"
// /**
// * print_last_digit - last digit
// * @n: n int
// *
// * Return: last digit
// */
// int print_last_digit(int n)
// {
// _putchar('0' + (n / 10));
// return (0);
// }
