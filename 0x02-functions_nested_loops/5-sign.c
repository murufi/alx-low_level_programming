#include "main.h"
/**
 * main -  Entery point
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0 )
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
