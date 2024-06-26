/*
 * 1176 - Fibonacci Array
 * Author: Otavio
 * Date: 09/04/2024
 */
#include <stdio.h>

int
main()
{
	int cases;
	int index;
	long long unsigned int fib[61];

	fib[0] = 0;
	fib[1] = 1;
	
	for (int i=2; i<61; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}

	scanf("%d", &cases);
	for (int i=0; i<cases; i++)
	{
		scanf ("%d", &index);
		printf("Fib(%d) = %llu\n", index, fib[index]);
	}
	return 0;
}
