/*
 * 3299 - Small Unlucky Numbers
 * Author: Otavio
 * Date: 10/05/2024
 */
#include <stdio.h>
#include <string.h>

int
main()
{
    char N[18];
    scanf("%s\n", &N);
    
    for(int i=0; i<strlen(N)-1; i++)
    {
        if(N[i] == '1' && N[i+1] == '3')
        {
            printf("%s es de Mala Suerte\n", N);
            return 0;
        }
    }
    
    printf("%s NO es de Mala Suerte\n", N);
    return 0;
}
