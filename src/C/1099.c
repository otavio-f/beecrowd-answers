/*
 * 1099 - Sum of Consecutive Odd Numbers II
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    
    int X, Y;
    int sum;
    while (N--)
    {
        sum=0;
        scanf("%d %d\n", &X, &Y);
        if(X>Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }
    
        X += (X%2)?2:1;
    
        for(; X<Y; X+=2)
            sum += X;
        printf("%d\n", sum);
    }
    return 0;
}
