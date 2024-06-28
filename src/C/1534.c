/*
 * 1534 - Array 123
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>
 
int main() {
    int dim;
    
    while(scanf("%d", &dim) != EOF)
    {
        for(int i=0; i<dim; i++)
        {
            for(int j=0; j<dim; j++)
            {
                if (i+j+1 == dim)
                    printf("2");
                else if(i==j)
                    printf("1");
                else
                    printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}
