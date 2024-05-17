/*
 * 1046 - Game Time
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>
#include <inttypes.h>

int
main()
{
	uint8_t start, end;

	scanf("%hhu %hhu", &start, &end);

	if (end <= start)
		end += 24;
	printf("O JOGO DUROU %hhu HORA(S)\n", end-start);

	return 0;
}
