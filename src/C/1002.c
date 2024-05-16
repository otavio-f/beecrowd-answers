/*
 * 1002 - Area of a Circle
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
#define PI 3.14159

int
main()
{
    double R;
    scanf("%lf", &R);
    
    double A=PI*R*R;
    printf("A=%.4lf\n", A);
    return 0;
}
