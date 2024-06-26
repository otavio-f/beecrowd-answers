/*
 * 1134 - Type of Fuel 
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int code;
    int a=0, g=0, d=0;
    
    while(scanf("%d\n", &code) && (code != 4))
    {
        switch(code)
        {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
            default:
                break;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}
