/*
 * 1043 - Triangle
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>

int
main()
{
	double a,b,c;

	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(b+c>a && a+c>b && b+a>c)
	{
		printf("Perimetro = %.1lf\n", a+b+c);
	}
	else
	{
		printf("Area = %.1lf\n", ((a+b)*c)/2.0);
	}

	return 0;
}
