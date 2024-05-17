/*
 * 1048 - Salary Increase
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int
main()
{
    double x;
    scanf("%lf", &x);
    
    double rr;
    if(x > 2000)
        rr = .04;
    else if(x > 1200)
        rr = .07;
    else if(x > 800)
        rr = .1;
    else if(x > 400)
        rr = .12;
    else
        rr = .15;
    
    double inc = x*rr;
    
    printf("Novo salario: %.2lf\n", x+inc);
    printf("Reajuste ganho: %.2lf\n", inc);
    printf("Em percentual: %.0lf %\n", 100*rr);
    return 0;
}
