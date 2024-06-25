/*
 * 1098 - Sequence IJ 4
 * Author: Otavio
 * Date: 06/05/2024
 */
#include <stdio.h>


int
main()
{
    for(float i=.0f; i<=2.01f; i+=.2f)
        for(int j=1; j<=3; j++)
            if (i-(int)i >= 0.01f)
                printf("I=%.1f J=%.1f\n", i, i+j);
            else
                printf("I=%d J=%d\n", (int)i, (int)(i+j));
    return 0;
}
