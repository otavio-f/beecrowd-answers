/*
 * 1072 - Interval 2
 * Author: Otavio
 * Date: 04/05/2024
 */
#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int X;
    int i=N;
    int incnt=0;
    while(i--)
    {
        scanf("%d", &X);
        if(X>=10 && X<=20)
            incnt++;
    }
    
    printf("%d in\n%d out\n", incnt, N-incnt);
    return 0;
}
