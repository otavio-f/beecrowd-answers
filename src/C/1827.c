/*
 * 1827 - Square Array IV
 * Author: Otavio
 * Date: 15/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    int c;
    
    while(scanf("%d", &N) != EOF)
    {
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                c = 0;
                if(i==j)
                    c = 2;
                if(i+j==N+1)
                    c = 3;
                int third = N/3;
                if(i>third && j>third && i<=N-third && j<=N-third)
                    c = 1;
                if(i==j && i==(N/2)+1)
                    c = 4;
                printf("%d", c);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
