/*
 * 1066 - Even, Odd, Positive and Negative
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int x, even=0, pos=0, neg=0;
    
    for(int i=0; i<5; i++)
    {
        scanf("%d", &x);
        if (x%2 == 0)
            even++;
        if (x>0)
            pos++;
        else if (x<0)
            neg++;
    }
    
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", 5-even);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
}
