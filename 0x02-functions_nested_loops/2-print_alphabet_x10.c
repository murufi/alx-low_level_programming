#include "main.h"
/**
 * print_alphabet - Make alphabet x10 times 
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 92; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
