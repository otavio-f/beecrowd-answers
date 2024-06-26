/*
 * 1174 - Array Selection I
 * Author: Otavio
 * Date: 09/04/2024
 */
#include <stdio.h>

int
main ()
{
	double arr[100];
	double val;
	for(int i=0; i<100; i++)
	{
		scanf("%lf", &val);
		arr[i] = val;
		if (val <= 10)
			printf("A[%d] = %.1lf\n", i, val);
	}
}
