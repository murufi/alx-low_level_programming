#include "main.h"
/**
 * main -  Entery point
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
