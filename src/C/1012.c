/*
 * 1012 - Area
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
#define PI 3.14159

int
main()
{
    double a, b, c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    printf("TRIANGULO: %.3lf\n", (a*c)/2.0);
    printf("CIRCULO: %.3lf\n", PI*(c*c));
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2.0);
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n", a*b);
    return 0;
}
