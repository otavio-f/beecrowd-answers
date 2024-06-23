/*
 * 1094 - Experiments
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
    
    
    uint32_t total[] = {0, 0, 0}; //{C, R, S}
    uint8_t amount;
    char type;
    while(N--)
    {
        scanf("%hhu %c\n", &amount, &type);
        switch(type)
        {
            case 'C':
                total[0] += amount;
                break;
            case 'R':
                total[1] += amount;
                break;
            case 'S':
                total[2] += amount;
                break;
        }
    }
    
    uint32_t sum = total[0] + total[1] + total[2];
    
    printf("Total: %u cobaias\n", sum);
    printf("Total de coelhos: %u\n", total[0]);
    printf("Total de ratos: %u\n", total[1]);
    printf("Total de sapos: %u\n", total[2]);
    printf("Percentual de coelhos: %.2lf %%\n", 100.0*total[0]/(double)sum);
    printf("Percentual de ratos: %.2lf %%\n", 100.0*total[1]/(double)sum);
    printf("Percentual de sapos: %.2lf %%\n", 100.0*total[2]/(double)sum);
    return 0;
}
