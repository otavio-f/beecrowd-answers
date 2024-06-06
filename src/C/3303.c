/*
 * 3303 - Big Word
 * Author: Otavio
 * Date: 10/05/2024
 */
#include <stdio.h>
#include <string.h>

int
main()
{
    char word[21];
    scanf("%s\n", &word);
    
    if(strlen(word) >= 10)
        printf("palavrao\n");
    else
        printf("palavrinha\n");
    return 0;
}
