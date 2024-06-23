/*
 * 1070 - Six Odd Numbers
 * Author: Otavio
 * Date: 04/05/2024
 */
#include <stdio.h>
 
int main()
{
    int X;
    scanf("%d", &X);
    
    if(X%2==0)
        X++;
    
    for(int i=0; i<6; i++,X=X+2)
        printf("%d\n", X);

    return 0;
}
