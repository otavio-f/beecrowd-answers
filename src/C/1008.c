/*
 * 1008 - Salary
 * Author: Otavio
 * Date: 25/04/2024
 */
#include <stdio.h>
 
int
main()
{
    int emp_id, hours;
    double us_per_hour;
    
    scanf("%d", &emp_id);
    scanf("%d", &hours);
    scanf("%lf", &us_per_hour);
    
    double salary = hours*us_per_hour;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", emp_id, salary);
    return 0;
}
