/*
 * 1047 - Game Time with Minutes
 * Author: Otavio
 * Date: 26/04/2024
 */
#include <stdio.h>

struct t
{
	int h;
	int m;
};

int
main()
{
	struct t st, end;

	scanf("%d %d %d %d", &(st.h), &(st.m), &(end.h), &(end.m));

	struct t diff;

	if (end.m < st.m)
	{
		end.h -= 1;
		end.m += 60;
	}
	if ((end.h < st.h) || (end.h == st.h && end.m == st.m))
		end.h += 24;

	diff.h = end.h-st.h;
	diff.m = end.m-st.m;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff.h, diff.m);
	return 0;
}
