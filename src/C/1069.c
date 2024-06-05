/*
 * 1069 - Diamonds and Sand
 * Author: Otavio
 * Date: 05/06/2024
 */
#include <stdio.h>

int
main()
{
	int N;
	scanf("%d\n", &N);

	char line[1000];
	int diamonds, got_half, stop;

	while(N--)
	{
		scanf("%s\n", line);
		diamonds=0;
		got_half=0;
		stop=0;

		for(int i=0; !stop; i++)
		{
			switch(line[i])
			{
				case '\0':
					stop++;
					break;
				case '<':
					got_half++;
					break;
				case '>':
					if(got_half)
					{
						got_half--;
						diamonds++;
					}
					break;
				default:
					break;
			}
		}
		printf("%d\n", diamonds);
	}

	return 0;
}
