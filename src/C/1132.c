/*
 * 1132 - Multiples of 13
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>

int
main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int temp;

    if(X>Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }
    temp = 0;
    for(;X<=Y;X++)
        if(X%13)
            temp+=X;
    printf("%d\n", temp);
    return 0;
}
