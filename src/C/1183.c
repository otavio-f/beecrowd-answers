/*
 * 1183 - Above the Main Diagonal 
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    char O;
    scanf("%c\n", &O);
    
    double elem;
    double result = 0;
    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
        {
            scanf("%lf\n", &elem);
            if(j>i)
            {
                result += elem;
            }
        }
    printf("%.1lf\n", O=='S'?result:result/66.0);
    return 0;
}
