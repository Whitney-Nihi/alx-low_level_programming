#include <stdio.h>
/**
*main - fibonacci <3
*
*Purpose - no hardcode
*
*Return:  (Success)
**/
int main(void)
{
	unsigned long int i, old, new, l, old1, old2, new1, new2;

	old = 1;
	new = 2;
	l = 1000000000;
	printf("%lu", old);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", new);
		new += old;
		old = new - old;
	}
	old1 = (old / l);
	old2 = (old % l);
	new1 = (new / l);
	new2 = (new % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", new1 + (new2 / l));
		printf("%lu", new2 % l);
		new1 = new1 + old1;
		old1 = new1 - old1;
		new2 = new2 + old2;
		old2 = new2 - old2;
	}
	printf("\n");
	return (0);
}
