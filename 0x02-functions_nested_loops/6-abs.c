#include "main.h"
/**
 * main -  Entery point
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
