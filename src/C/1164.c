/*
 * 1164 - Perfect Number 
 * Author: Otavio
 * Date: 20/03/2024
 */
#include <stdio.h>

int
main()
{
	int count; // quantos casos de teste
	int x; // numero a ser testado
	int sum; // soma dos divisores
	
	scanf("%d", &count);
	for (;count>0; count--)
	{
		scanf("%d", &x);
		if(x==1) //nem precisa calcular
		{
			printf("1 nao eh perfeito\n");
			continue;
		}

		sum = 1;
		for(int i=2; i<=x/2; i++) //ja foi contado o 1 e o maior numero que se pode dividir eh a metade do original, entao vai de 2 ate x/2
		{
			if(x%i==0)
			{
				sum+=i;
			}
		}
		if(sum==x)
			printf("%d eh perfeito\n", x);
		else
			printf("%d nao eh perfeito\n", x);
	}
}
