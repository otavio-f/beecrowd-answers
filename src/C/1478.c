/*
 * 1478 - Square Matrix II
 * Author: Otavio
 * Date: 13/04/2024
 */
#include <stdio.h>

void
printsqarr(int n) //cria e imprime o array quadrado na tela
{
	//criacao
	int arr[n][n];

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (i==j) arr[i][j] = 1;
			else if (i<j) arr[i][j] = j-i+1;
			else arr[i][j] = i-j+1;
		}
	}

	//imprime
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%s%3hd", (j==0)? "" : " ", arr[i][j]); //sem espacos na primeira posicao
		}
		printf("\n");
	}
}

int
main()
{	
	int n;

	do
	{
		scanf("%d", &n);
		switch(n)
		{
			case 0:
				break;
			case 1:
				printf("  1\n\n");
				break;
			default:
				printsqarr(n);
				printf("\n");
				break;
		}
	} while(n);
}
