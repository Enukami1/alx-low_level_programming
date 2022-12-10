#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	/* your code goes there */
if (n > 5)
{
printf("the last digit of %d is greater than 5\n", n, a);
}
else if (n == 0)
{
printf("the last digit of %d is greater than 5\n", n, a);
}
else
{
printf("the last digit of %d is greater than 5\n", n, a);
}
return (0);
}
