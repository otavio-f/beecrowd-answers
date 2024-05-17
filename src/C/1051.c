/*
 * 1051 - Taxes
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    double S;
    scanf("%lf\n", &S);
    
    double T = 0;
    if(S>4500)
    {
        T = .28*(S-4500) + .18*1500 + .08*1000;
    }
    else if(S>3000)
    {
        T = .18*(S-3000) + .08*1000;
    }
    else if(S>2000)
    {
        T = .08*(S-2000);
    }
    
    if (T>0)
        printf("R$ %.2lf\n", T);
    else
        printf("Isento\n");
    return 0;
}
