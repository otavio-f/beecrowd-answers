/*
 * 1144 - Logical Sequence
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    
    for(unsigned int i=1; i<=N; i++)
    {
        printf("%u %u %u\n%u %u %u\n", i, (i*i), (i*i*i), i, (i*i+1), (i*i*i+1));
    }
    return 0;
}
