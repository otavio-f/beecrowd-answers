/*
 * 1067 - Odd Numbers
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int X;
    scanf("%d", &X);
    
    for(int i = 1; i<=X; i=i+2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
