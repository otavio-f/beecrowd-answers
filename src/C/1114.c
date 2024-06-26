/*
 * 1114 - Fixed Password
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>
#include <string.h>
 
int
main()
{
    int pass;
    while(scanf("%d\n", &pass) && pass != 2002)
    {
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    
    return 0;
}
