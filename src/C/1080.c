/*
 * 1080 - Highest and Position
 * Author: Otavio
 * Date: 05/05/2024
 */
#include <stdio.h>


int main() {
    int X;
    scanf("%d\n", &X);
    int max=X, imax=1;
    
    for(int i=2; i<=100; i++)
    {
        scanf("%d\n", &X);
        if(X>max)
        {
            max = X;
            imax = i;
        }
    }
    printf("%d\n%d\n", max, imax);
 
    return 0;
}
