/*
 * 1064 - Positives and Average
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int
main()
{
    double x;
    double avg=0;
    int cnt=0;
    for(int i=0; i<6; i++)
    {
        scanf("%lf", &x);
        if(x > 0)
        {
            cnt++;
            avg += (x-avg)/((double)cnt);
        }
    }
    printf("%d valores positivos\n%.1lf\n", cnt, avg);
    return 0;
}
