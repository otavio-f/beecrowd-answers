/*
 * 1160 - Population Increase 
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int T;
    scanf("%d\n", &T);
    
    int PA, PB;
    double GA, GB;
    int years;
    while(T--)
    {
        scanf("%d %d %lf %lf\n", &PA, &PB, &GA, &GB);
        years = 0;
        while(PA<=PB && years<=100)
        {
            PA += PA*GA/100.0;
            PB += PB*GB/100.0;
            years++;
        }
        if(years>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", years);
    }
    return 0;
}
