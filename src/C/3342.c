/*
 * 3342 - Keanu
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>

int
main()
{
	int x;
	scanf("%d", &x);
	x = x*x;

	printf("%d casas brancas e %d casas pretas\n", (x/2)+(x%2), x/2);
	return 0;
}
