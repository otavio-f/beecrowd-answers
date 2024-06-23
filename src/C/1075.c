/*
 * 1075 - Remaining 2
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
#include <inttypes.h>


int
main()
{
    uint16_t N;
    scanf("%hu\n", &N);
    
    for(uint16_t i=2; i<10000; i+=N)
        printf("%hu\n", i);
 
    return 0;
}
