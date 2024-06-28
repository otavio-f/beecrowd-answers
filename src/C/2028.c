/*
 * 2028 - Sequence of Sequence 
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>


int
main()
{
	int N;
	int c;

	for(int i=1; scanf("%d", &N)!=EOF; i++)
	{
		if(N==0)
		{
			printf("Caso %i: 1 numero\n0\n\n", i);
			continue;
		}

		c=1;

		for(int x=1; x<=N; x++)
		{
			c+=x;
		}
		printf("Caso %d: %d numeros\n", i, c); 

		printf("0 ");
		for(int x=0; x<=N; x++)
		{
			for(int y=0; y<x; y++)
			{
				printf("%d", x);
				if (x!=N || y!=x-1)
					printf(" ");
			}
		}
		printf("\n\n");
	}
	return 0;
}
