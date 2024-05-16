/*
 * 1009 - Salary with Bonus
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	char name[100];
	double salary, profit;

	scanf("%s", name);
	scanf("%lf", &salary);
	scanf("%lf", &profit);

	printf("TOTAL = R$ %.2lf\n", salary+(profit*.15));
	return 0;
}
