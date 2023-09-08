#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program will assign a random number
 * to the variable n each time it is executed.
 * 
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("Last digit of %d is and is greater than 5\n");
	if (n % 10 == 0)
                printf("Last digit of %d is and is 0\n");
	if (n % 10 < 6 && n % 10 > 0)
                printf("Last digit of %d is and is less than 6 and not 0\n");
	return (0);
}
