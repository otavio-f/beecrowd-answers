/*
 * 1065 - Even Between five Numbers
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int x, c=0;
    
    for (int i=0; i<5; i++)
    {
        scanf("%d", &x);
        if (x%2 == 0)
            c++;
    }
    printf("%d valores pares\n", c);
    return 0;
}
