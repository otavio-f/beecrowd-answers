/*
 * 1021 - Banknotes and Coins
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	double val;

	scanf("%lf", &val);
    val += 0.001;
	int count;

	printf("NOTAS:\n");
	const int notes[] = {100, 50, 20, 10, 5, 2};
	for(int i=0; i<6; i++)
	{
		count = val/notes[i];
		val -= count*notes[i];
		printf("%d nota(s) de R$ %.2f\n", count, (float)notes[i]);
	}

	printf("MOEDAS:\n");
	const double coins[] = {1.00, .5, .25, .1, .05, .01};
	for(int i=0; i<6; i++)
	{
		count = val/coins[i];
		val -= count*coins[i];
		printf("%d moeda(s) de R$ %.2lf\n", count, coins[i]);
	}
	return 0;
}
