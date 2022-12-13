#include<stdio.h>
int main(void)
{
int num;
scanf("%d", &num);
while (num)
{
printf("%d \n", num % 10);
num = num / 10;
}
(
return (0);
)
}
