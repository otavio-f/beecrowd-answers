/*
 * 1116 - Dividing X by Y
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    
    int X, Y;
    while (N--)
    {
        scanf("%d %d\n", &X, &Y);
        if(Y)
            printf("%.1f\n", (double)X/Y);
        else
            printf("divisao impossivel\n");
    }
    return 0;
}
