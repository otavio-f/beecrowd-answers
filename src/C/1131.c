/*
 * 1131 - Grenais
 * Author: Otavio
 * Date: 09/05/2024
 */
#include <stdio.h>


int
main()
{
    int R;
    int Vi=0, Vg=0, E=0;
    int Gi, Gg;
    
    do
    {
        scanf("%d %d\n", &Gi, &Gg);
        if(Gi>Gg)
            Vi++;
        else if(Gi<Gg)
            Vg++;
        else
            E++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d\n", &R);
    } while(R != 2);
    
    printf("%d grenais\n", Vi+Vg+E);
    printf("Inter:%d\n", Vi);
    printf("Gremio:%d\n", Vg);
    printf("Empates:%d\n", E);
    if(Vi>Vg)
        printf("Inter venceu mais\n");
    else if(Vg>Vi)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
