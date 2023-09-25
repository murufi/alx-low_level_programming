#include "main.h"
/**
 * _islower - checks for lower character
 * @c: The character to be checked
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
