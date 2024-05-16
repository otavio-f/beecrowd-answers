/*
 * 1037 - Interval
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>
#define ERROR .00001

int
main()
{
	float n;
	scanf("%f", &n);

	if (n<0 || n>100)
	{
		printf("Fora de intervalo\n");
		return 0;
	}

	printf("Intervalo ");
	if(n<25+ERROR)
		printf("[0,25]\n");
	else if (n<50+ERROR)
		printf("(25,50]\n");
	else if (n<75+ERROR)
		printf("(50,75]\n");
	else
		printf("(75,100]\n");
	return 0;
}
