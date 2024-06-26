/*
 * 1142 - PUM 
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    
    int counter = 1;
    while(N--)
    {
        for(; counter%4; counter++)
        {
            printf("%d ", counter);
        }
        printf("PUM\n");
        counter++;
    }
    return 0;
}
