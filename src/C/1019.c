/*
 * 1019 - Time Conversion
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	int t;

	scanf("%d", &t);

	int h = t/3600;
	t -= 3600*h;

	int m = t/60;
	t -= 60*m;

	printf("%d:%d:%d\n", h, m, t);

	return 0;
}
