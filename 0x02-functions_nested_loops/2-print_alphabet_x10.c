#include "main.h"
/**
* print_alphabet_x10 - Make alphabet x10 times 
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
