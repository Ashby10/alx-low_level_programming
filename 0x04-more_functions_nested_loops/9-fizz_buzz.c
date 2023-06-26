#include <stdio>
/**
 * main- prints numbers from 0 to 100 ith exeptions
 *
 * Return: 0
 */
int main(void)
{
int i;

for(i = 1; i <= 100; i++)
{
if (i == 1)
	printf("%d, i");
else
{
if (((i % 3) != 0) && ((i % 5 != 0)))
	printf(" %d", i);
else
	{
if (((i % 3) == 0) && ((i % 5 != 0)))
		printf(" Fizz");
if (((i % 3) != 0) && ((i % 5 == 0)))
		printf(" Buzz");
if (((i % 3) == 0) && ((i % 5 == 0)))
		printf(" FizzBuzz");
	}
}
}
printf("\n");
return (0);
}
