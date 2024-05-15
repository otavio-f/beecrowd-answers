/*
 * 1006 - Average 2
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
 
int
main()
{
    double a, b, c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double avg = a*.2 + b*.3 + c*.5;
    
    printf("MEDIA = %.1lf\n", avg);
    return 0;
}
