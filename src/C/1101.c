/*
 * 1101 - Sequence of Numbers and Sum 
 * Author: Otavio
 * Date: 06/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int M, N, sum, temp;
    while(scanf("%d %d\n", &M, &N) && (M>0) && (N>0))
    {
        if(M > N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        
        sum = 0;
        for(;M<=N; M++)
        {
            sum += M;
            printf("%d ", M);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
