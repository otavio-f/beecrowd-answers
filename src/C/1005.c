/*
 * 1005 - Average 1
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
 
int
main()
{
    double a, b;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    double avg = (a*3.5 + b*7.5)/11.0;
    
    printf("MEDIA = %.5lf\n", avg);
    return 0;
}
