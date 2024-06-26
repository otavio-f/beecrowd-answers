/*
 * 1133 - Rest of a Division
 * Author: Otavio
 * Date: 08/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int X, Y;
    scanf("%d %d\n", &X, &Y);
    
    if(X>Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    
    for(++X; X<Y; X++)
    {
        if((X%5 == 2) || (X%5 == 3))
            printf("%d\n", X);
    }
    return 0;
}
