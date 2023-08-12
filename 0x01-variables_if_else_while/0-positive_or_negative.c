#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -entery point
 * Description :positive or negative
 * return : 0 (succces)
*/

int main(void)
{
	int n;

	srand (time(0));
	n = rand () - RAND_MAX / 2;
	if (n > 0)
		printf ("is positive /n");
	if else (n < 0)
		printf ("is negative /n");
	else
		printf ("is zero /n");
	return (0);
}
