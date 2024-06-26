/*
 * 1118 - Several Scores with Validation
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int X;
    double score;
    double sum;
    int valid;
    do
    {
        sum = 0;
        valid = 0;
        while(valid<2)
        {
            scanf("%lf\n", &score);
            if(score <= 10 && score >=0)
            {
                valid++;
                sum+=score;
            }
            else
                printf("nota invalida\n");
        }
        printf("media = %.2lf\n", sum/2.0);
        do
            printf("novo calculo (1-sim 2-nao)\n");
        while(scanf("%d\n", &X) && (X!=2) && (X!=1));
    } while(X==1);
    return 0;
}
