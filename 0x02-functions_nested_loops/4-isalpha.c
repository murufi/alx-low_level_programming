#include "main.h"
/**
 * main -  Entery point
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
