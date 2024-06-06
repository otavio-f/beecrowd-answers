/*
 * 3300 - Recharged Unlucky Numbers
 * Author: Otavio
 * Date: 06/06/2024
 */
#include <stdio.h>

int
main()
{
	char N[102];
	scanf("%s", N);

	for(int i=1; N[i] != '\0'; i++)
	{
		if(N[i-1] == '1' && N[i] == '3')
		{
			printf("%s es de Mala Suerte\n", N);
			return 0;
		}
	}

	printf("%s NO es de Mala Suerte\n", N);
	return 0;
}
