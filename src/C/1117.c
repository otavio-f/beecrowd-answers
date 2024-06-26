/*
 * 1117 - Score Validation
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    double score, sum=0;
    int valid=0;
    while(valid<2)
    {
        scanf("%lf\n", &score);
        if(score>=0 && score<=10)
        {
            sum+=score;
            valid++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", sum/2.0);
    return 0;
}
