/*
 * 1011 - Sphere
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
#define PI 3.14159

int
main()
{
    double r;
    scanf("%lf", &r);
    
    double volume = (4/3.0)*PI*(r*r*r);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
