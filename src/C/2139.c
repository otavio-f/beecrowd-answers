/*
 * 2139 - Pedrinho's Christmas
 * Author: Otavio
 * Date: 20/03/2024
 */
#include <stdio.h>

int
main()
{
	int day, month;
	int daycount;

	while(1)
	{
		if(scanf("%d %d", &month, &day) == EOF)
			break;

		if(month==12)
		{
			if(day==24)
				printf("E vespera de natal!\n");
			if(day==25)
				printf("E natal!\n");
			if(day>25)
				printf("Ja passou!\n");
		}
		else
		{
			daycount = -1*day; //dias ja passados
			switch(month)
			{
				case 1:
					daycount += 31;
				case 2:
					daycount += 29;
				case 3:
					daycount += 31;
				case 4:
					daycount += 30;
				case 5:
					daycount += 31;
				case 6:
					daycount += 30;
				case 7:
					daycount += 31;
				case 8:
					daycount += 31;
				case 9:
					daycount += 30;
				case 10:
					daycount += 31;
				case 11:
					daycount += 30;
				default: //case 12, so conta 25 dias
					daycount += 25;
					break;
			}
			printf("Faltam %d dias para o natal!\n", daycount);
		}
	}
}
