/*
 * 1175 - Array change I
 * Author: Otavio
 * Date: 13/04/2024
 */
#include <stdio.h>
#define COUNT 20


int
main()
{
	int n[COUNT];

	for (int i=0; i<COUNT; i++)
	{
		scanf("%d", &n[i]);
	}
	
	int temp;
	for(int i=0, j=COUNT-1; i<COUNT && j>i; i++, j--) //i cabeca e j cauda
	{
		temp = n[i];
		n[i] = n[j];
		n[j] = temp;
	}

	for(int i=0; i<COUNT; i++)
	{
		printf("N[%d] = %d\n", i, n[i]);
	}
}
