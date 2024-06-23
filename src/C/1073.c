/*
 * 1073 - Even Square
 * Author: Otavio
 * Date: 04/05/2024
 */
#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    for(int i=2; i<=N; i+=2)
    {
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}
