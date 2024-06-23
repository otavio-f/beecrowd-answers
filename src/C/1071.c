/*
 * 1071 - Sum of Consecutive Odd Numbers I
 * Author: Otavio
 * Date: 04/05/2024
 */
#include <stdio.h>
 
int 
main()
{
    long int X, Y;
    scanf("%ld", &X);
    scanf("%ld", &Y);
    
    if(X>Y) // X deve ser menor que Y
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    
    long int sum=0;
    X += (X%2) ? 2 : 1; // X deve ser impar
    
    for(; X < Y; X+=2)
    {
        sum += X;
    }
    
    printf("%ld\n", sum);
    return 0;
}
