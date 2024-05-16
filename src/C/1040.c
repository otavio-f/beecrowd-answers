/*
 * 1040 - Average 3
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>

int
main()
{
	double N1, N2, N3, N4;
	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	double avg = (N1*2)+(N2*3)+(N3*4)+N4;
	avg = avg/10.0;

	printf("Media: %.1lf\n", avg);
	if (avg<5)
	{
		printf("Aluno reprovado.\n");
		return 0;
	}

	if (avg>=7)
	{
		printf("Aluno aprovado.\n");
		return 0;
	}

	printf("Aluno em exame.\n");
	scanf("%lf", &N1); // reusando N1 como nota do exame
	printf("Nota do exame: %.1lf\n", N1);
	avg = (avg+N1)/2.0;
	if(avg>=5)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		printf("Aluno reprovado.\n");
	}
	printf("Media final: %.1lf\n", avg);
}
