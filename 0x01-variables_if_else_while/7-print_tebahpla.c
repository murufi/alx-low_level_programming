#include <stdio.h>
/**
 * main -  Entery point
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
