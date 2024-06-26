/*
 * 1182 - Column in Array
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>


int
main()
{
	int C;
	char T;
	scanf("%d\n", &C);
	scanf("%c\n", &T);

	double res = 0;
	double x;

	for(int i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			scanf("%lf", &x);
			if(j==C)
				res += x;
		}
	}

	printf("%.1lf\n", (T=='S'? res : res/12.0));
	return 0;
}
