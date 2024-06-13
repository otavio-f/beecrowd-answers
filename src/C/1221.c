/*
 * 1221 - Fast Prime Number
 * Author: Otavio
 * Date: 13/06/2024
 */
#include <stdio.h>
#include <math.h>

int
main()
{
	int N;
	scanf("%d\n", &N);

	unsigned long int X, i;
	while(N--)
	{
		scanf("%lu\n", &X);
		for(i=floor(sqrt(X)); i>=2; i--)
		{
			if(X%i==0)
				break;
		}
		if(i==1)
			puts("Prime");
		else
			puts("Not Prime");
	}

	return 0;
}
