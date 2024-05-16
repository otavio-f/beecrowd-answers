/*
 * 1020 - Age in Days
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	int d;

	scanf("%d", &d);

	int y = d/365;
	d -= 365*y;
	printf("%d ano(s)\n", y);

	int m = d/30;
	d -= 30*m;
	printf("%d mes(es)\n", m);

	printf("%d dia(s)\n", d);

	return 0;
}
