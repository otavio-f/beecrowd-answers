/*
 * 1042 - Simple Sort
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>

int
main()
{
	int n[3], asc[3];
	int temp;

	scanf("%d %d %d", n, n+1, n+2);

	for(int i=0; i<3; i++)
		asc[i] = n[i];

	for(int i=0; i<3; i++)
		for(int j=i+1; j<3; j++)
			if(asc[i]>asc[j])
			{
				temp = asc[i];
				asc[i] = asc[j];
				asc[j] = temp;
			}
	for(int i=0; i<3; i++)
		printf("%d\n", asc[i]);
	
	printf("\n");

	for(int i=0; i<3; i++)
		printf("%d\n", n[i]);
	return 0;
}
