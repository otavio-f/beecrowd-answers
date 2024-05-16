/*
 * 1045 - Triangle Types
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    double A, B, C;
    scanf("%lf %lf %lf\n", &A, &B, &C);
    
    double temp;
    if (B>A)
    {
        temp = B;
        B = A;
        A = temp;
    }
    
    if (C>A)
    {
        temp = C;
        C = A;
        A = temp;
    }
    
    if (C>B)
    {
        temp = C;
        C = B;
        B = temp;
    }
    
    if (A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    A = A*A;
    B = B*B;
    C = C*C;
    if (A == B+C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A > B+C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A == B && A == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B || B == C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
