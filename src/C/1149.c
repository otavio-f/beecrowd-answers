/*
 * 1149 - Summing Consecutive Integers
 * Author: Otavio
 * Date: 17/07/2024
 */
#include <stdio.h>


int
main()
{
	int A;
	scanf("%d", &A);

	int N;
	while((scanf("%d", &N)) && N<=0)
		(void)0; // do nothing
	
	int sum=0;
	while(N--)
	{
		sum+=A;
		A++;
	}

	printf("%d\n", sum);
	return 0;
}
