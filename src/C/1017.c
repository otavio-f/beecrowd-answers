/*
 * 1017 - Fuel Spent
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	int t, s;

	scanf("%d", &t);
	scanf("%d", &s);

	int d = t*s;
	printf("%.3lf\n", (double)d/12.0);
}
