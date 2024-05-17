/*
 * 1154 - Ages
 * Author: Otavio
 * Date: 17/05/2024
 */
#include <stdio.h>
 
int
main()
{
    int age;
    int count=0;
    double sum=0;
    
    while(scanf("%d\n", &age) && age>0)
    {
        sum += age;
        count++;
    }
    
    printf("%.2lf\n", sum/count);
    return 0;
}
