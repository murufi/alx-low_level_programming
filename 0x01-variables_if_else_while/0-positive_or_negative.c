#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main = Entery point
 * Discripton: 'Check for number if it is positive or negative'
 * Return: 'always 0'
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagative\n", n);
	}
	return (0);
}
