/*
 * 1984 - The Pronalância Puzzle
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
#include <string.h>

int main() {
    char x[11];
    scanf("%s", &x);
    
    for(int i=strlen(x)-1; i>=0; i--)
        printf("%c", x[i]);
    printf("\n");
    
    return 0;
}
