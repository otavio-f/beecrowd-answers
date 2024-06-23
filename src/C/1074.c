/*
 * 1074 - Even or Odd
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
#include <inttypes.h>
/*
 * Inttypes/scanf reference in /usr/include/inttypes.h
 */

int
main()
{
    uint16_t N;
    scanf("%hu\n", &N);
    
    int32_t X;
    while(N--)
    {
        scanf("%d\n", &X);
        if(X == 0)
        {
            printf("NULL\n");
            continue;
        }
        if (X%2)
            printf("ODD ");
        else
            printf("EVEN ");
        
        if (X<0)
            printf("NEGATIVE\n");
        else
            printf("POSITIVE\n");
    }
    return 0;
}
