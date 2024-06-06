/*
 * 3302 - Correct Answer
 * Author: Otavio
 * Date: 10/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    
    int r;
    for(int i=1; i<=N; i++)
    {
        scanf("%d\n", &r);
        printf("resposta %d: %d\n", i, r);
    }
    return 0;
}
