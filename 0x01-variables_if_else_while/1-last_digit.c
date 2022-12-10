
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	/* your code goes there */

if (lastn > 5)
{
printf("the last digit of %d is %d is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("the last digit of %d is %d and is 0\n", n, lastn);
}
else
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
