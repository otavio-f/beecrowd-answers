/*
 * 1578 - Matrix of Squares
 * Author: Otavio
 * Date: 25/05/2024
 */
#include <stdio.h>
#include <string.h>

int
main()
{
    int N;
    scanf("%d\n", &N);
    
    int M;
    for(int n=0; n<N; n++)
    {
        if(n) // formatacao, nova linha depois do primeiro caso
            printf("\n");

        // Preenchimento do array
        scanf("%d\n", &M);
        long long unsigned int matrix[M][M];
        long long unsigned int col_max[M];
        memset(col_max, 0, sizeof(col_max));
        
        for(int i=0; i<M; i++)
            for(int j=0; j<M; j++)
            {
                scanf("%llu", &(matrix[i][j]));
                matrix[i][j] *= matrix[i][j];
                if(matrix[i][j]>col_max[j])
                    col_max[j] = matrix[i][j];
            }
        
        // Contagem de digitos para alinhamento
        long long unsigned int val;
        for(int j=0; j<M; j++)
        {
            val = col_max[j];
            col_max[j] = 1;
            while(val/=10)
                col_max[j]++;
        }
        
        // Imprimir resultados
        printf("Quadrado da matriz #%d:\n", n+4);
        for(int i=0; i<M; i++)
            for(int j=0; j<M; j++)
                printf("%*llu%c", (int)col_max[j], matrix[i][j], (j==M-1)?'\n':' ');
    }
    return 0;
}
