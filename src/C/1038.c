/*
 * 1038 - Snack
 * Author: Otavio
 * Date: 30/04/2024
 */
#include <stdio.h>
 
int
main()
{
    int code;
    int amount;
    
    scanf("%d %d", &code, &amount);
    
    double total;
    switch(code)
    {
        case 1:
            total = 4;
            break;
        case 2:
            total = 4.5;
            break;
        case 3:
            total = 5;
            break;
        case 4:
            total = 2;
            break;
        case 5:
            total = 1.5;
            break;
    }
    
    printf("Total: R$ %.2lf\n", total*amount);
    return 0;
}
