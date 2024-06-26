/*
 * 1115 - Quadrant
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int X, Y;
    
    while(scanf("%d %d\n", &X, &Y) && X && Y)
    {
        if(X>0 && Y>0)
            printf("primeiro\n");
        else if(X<0 && Y>0)
            printf("segundo\n");
        else if(X<0 && Y<0)
            printf("terceiro\n");
        else if(X>0 && Y<0)
            printf("quarto\n");
    }
    return 0;
}
