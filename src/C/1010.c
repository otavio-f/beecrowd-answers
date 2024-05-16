/*
 * 1010 - Simple Calculate
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

struct product
{
	int id;
	int q;
	double val;
};

int
main()
{
	struct product a, b;
	scanf("%d %d %lf", &(a.id), &(a.q), &(a.val));
	scanf("%d %d %lf", &(b.id), &(b.q), &(b.val));

	double total = (a.q*a.val) + (b.q*b.val);
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	return 0;
}
