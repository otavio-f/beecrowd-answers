/*
 * 1558 - Sum of Two Squares
 * Author: Otavio
 * Date: 24/04/2024
 */
#include <stdio.h>
#include <math.h>

int
main()
{
	int n;
	int x, y;
	long sum;

	while (scanf("%d", &n) != EOF)
	{
		x = 0;
		y = sqrt(n);
	
		while(y>=x && sum!=n)
		{
			
			sum = x * x + y * y;
			if (sum < n)
				x++;
			else
				y--;
		}		
		printf("%s\n", (sum==n)? "YES": "NO");

	}
	return 0;
}
