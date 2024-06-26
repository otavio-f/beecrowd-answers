/*
 * 1113 - Ascending and Descending 
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int X, Y;
    while(scanf("%d %d\n", &X, &Y) && X != Y)
    {
        printf("%srescente\n", (X>Y)?"Dec":"C");
    }
    return 0;
}
