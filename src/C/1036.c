/*
 * 1036 - Bhaskara's Formula
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
#include <math.h>

int
main()
{
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double delta = (b*b)-(4*a*c);
    if(a*c == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    double R1 = (-b+sqrt(delta))/(2.0*a);
    double R2 = (-b-sqrt(delta))/(2.0*a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    return 0;
}
