
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if ( m == 0)
		{
		printf("last digit of %d is %d and the string is 0\n", n, m);
		}
	else 
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	} 
	return (0);
}



