#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
*main - generates random number and displays if the last digit
*is greater than 5, is zero or less than 6 and not 0
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*get the lats digit of n*/

	lastNum = n % 10;

	/* if..else..if..else statement*/
	if (lastNum > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);

	if (lastNum == 0)
	printf("Last digit of %d is %d and is 0\n", n, lastNum);

	if (lastNum < 6 && lastNum != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
