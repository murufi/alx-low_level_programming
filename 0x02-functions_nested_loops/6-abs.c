#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *  @i: The character to be checked
 * Return: absolute number or zero
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
