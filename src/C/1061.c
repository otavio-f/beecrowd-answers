/*
 * 1061 - Event Time
 * Author: Otavio
 * Date: 03/05/2024
 */
#include <stdio.h>

struct moment
{
    int d;
    int h;
    int m;
    int s;
};

int
main()
{
    struct moment st;
    scanf("Dia %d", &(st.d));
    scanf("%d : %d : %d\n", &(st.h), &(st.m), &(st.s));

    struct moment end;
    scanf("Dia %d", &(end.d));
    scanf("%d : %d : %d", &(end.h), &(end.m), &(end.s));

    if (end.s < st.s)
    {
	    end.m -= 1;
	    end.s += 60;
    }
    if (end.m < st.m)
    {
	    end.h -= 1;
	    end.m += 60;
    }
    if (end.h < st.h)
    {
	    end.d -= 1;
	    end.h += 24;
    }

    printf("%d dia(s)\n", end.d-st.d);
    printf("%d hora(s)\n", end.h-st.h);
    printf("%d minuto(s)\n", end.m-st.m);
    printf("%d segundo(s)\n", end.s-st.s);

    return 0;
}
