#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* your code goes there */
	if (n > 5) 
{
printf("Last digit of %d is %d and is 5", n, ld);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, ld);
}
else 
{
printf("Last digit of %d is %d and less than 6 not 0", n, ld);
}
	return (0);
}
