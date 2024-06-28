/*
 * 2787 - Chess
 * Author: Otavio
 * Date: 07/03/2024
 */
#include <stdio.h>
 
int
main()
{
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x%2 == y%2) // parXpar, imparXimpar: branco
        printf("1\n");
    else // imparXpar, parXimpar: preto
        printf("0\n");

    return 0;
}
