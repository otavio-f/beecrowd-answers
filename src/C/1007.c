/*
 * 1007 - Difference
 * Author: Otavio
 * Date: 05/03/2024
 */
#include <stdio.h>

int
main()
{
    int a, b, c, d;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    int diff = a*b-c*d;
    
    printf("DIFERENCA = %d\n", diff);
    return 0;
}
