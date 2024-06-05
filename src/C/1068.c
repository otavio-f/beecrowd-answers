/*
 * 1068 - Parentheses Balance I
 * Author: Otavio
 * Date: 05/06/2024
 */
#include <stdio.h>

int
main()
{
	char line[1000];
	int open, stop;

	while(scanf("%s\n", line) != EOF)
	{
		open=0;
		stop=0;

		for(int i=0; !stop; i++)
		{
			switch(line[i])
			{
				case '\0':
					stop++;
					break;
				case '(':
					open++;
					break;
				case ')':
					if(open<=0)
						stop++;
					open--;
					break;
				default:
					break;
			}
		}
		printf("%scorrect\n", open?"in":"");
	}

	return 0;
}
