/*
 * 1143 - Squared and Cubic
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int N;
    scanf("%d\n", &N);
    for(unsigned int i=1;i<=N; i++)
        printf("%u %u %u\n", i, i*i, i*i*i);
    return 0;
}
