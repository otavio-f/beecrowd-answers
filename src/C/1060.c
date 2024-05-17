/*
 * 1060 - Positive Numbers
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>
 
int
main()
{
    int count = 0;
    double num;
    for(int i=0; i<6; i++)
    {
        scanf("%lf", &num);
        if(num > 0)
            count++;
    }
    printf("%d valores positivos\n", count);
    
    return 0;
}
