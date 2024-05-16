/*
 * 1013 - The Greatest
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>
#include <stdlib.h>

int
bigger(int a, int b)
{
	return (a+b+(abs(a-b)))/2;
}

int
main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d eh o maior\n", bigger(a, bigger(b, c)));
}
