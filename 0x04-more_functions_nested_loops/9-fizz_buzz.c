#include <stdio>
/**
 * main- draws a square with #
 *
 * Return: int
 */
int main(void)
{
int i;

for(i = 0; i < 100; i++)
{
if (((i % 3) != 0) && ((i % 5 != 0)))
	printf("%d", i);
else
	{
if (((i % 3) == 0) && ((i % 5 != 0)))
		printf("Fizz");
if (((i % 3) != 0) && ((i % 5 == 0)))
		printf("buzz");
if (((i % 3) == 0) && ((i % 5 == 0)))
		printf("Fizzbuzz");
	}
}
printf("\n");
return (0);
}
