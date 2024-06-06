/*
 * 3301 - Middle Nephew
 * Author: Otavio
 * Date: 10/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int H, Z, L;
    scanf("%d %d %d\n", &H, &Z, &L);
    if((H>Z && H<L) || (H<Z && H>L))
        printf("huguinho\n");
    if((Z>H && Z<L) || (Z<H && Z>L))
        printf("zezinho\n");
    if((L>Z && L<H) || (L<Z && L>H))
        printf("luisinho\n");
    return 0;
}
