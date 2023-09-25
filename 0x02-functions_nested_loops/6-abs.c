#include "main.h"
/**
 * -abs - checks for lower character
 *  @i: The character to be checked
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
