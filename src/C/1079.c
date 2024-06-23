/*
 * 1079 - Weighted Averages
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d", &N);
    
    double x, y, z;
    while (N--)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n", (x*.2)+(y*.3)+(z*.5));
    }
    return 0;
}
