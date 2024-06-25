/*
 * 1097 - Sequence IJ 3
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    for(int i=1; i<=9; i+=2)
        for(int j=7; j>=5; j--)
            printf("I=%d J=%d\n", i, j+(i-1));
    return 0;
}
