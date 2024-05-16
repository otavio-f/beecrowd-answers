/*
 * 1018 - Banknotes
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

int
main()
{
	int val;

	scanf("%d", &val);
	printf("%d\n", val);
	const int notes[] = {100, 50, 20, 10, 5, 2, 1};
	int count;

	for(int i=0; i<7; i++)
	{
		count = val/notes[i];
		val -= count*notes[i];
		printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
	}
	return 0;
}
