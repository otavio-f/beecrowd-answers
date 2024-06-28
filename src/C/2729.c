/*
 * 2729 - Shopping List 
 * Author: Otavio
 * Date: 17/04/2024
 */
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 21 // inclui 0 \0 no final de cada string
#define MAX_LIST_LENGTH 1000
#define MAX_LENGTH MAX_WORD_LENGTH*MAX_LIST_LENGTH


void
bub_sort(char[][MAX_WORD_LENGTH], int length);


int
main()
{
	int cases;
	scanf("%d", &cases);
	
	char shop_list[MAX_LENGTH];
	int count;
	char *token;
	char items[MAX_LIST_LENGTH][MAX_WORD_LENGTH];

	while (cases--)
	{

		scanf(" %[^\n]", shop_list);
		count = 0;
		token = strtok(shop_list, " ");

		do
		{
			strcpy(items[count++], token);
		} while ((token = strtok(NULL, " ")));
		
		bub_sort(items, count);

		for (int i=0; i<count; i++)
		{
			if (strcmp(items[i], items[i-1]) == 0)
				continue;
			printf("%s%s", (i!=0)?" ":"", items[i]);
		}
		printf("\n");
	}

}

void
bub_sort(char str_arr[][MAX_WORD_LENGTH], int length)
{
	char temp[MAX_WORD_LENGTH];

	for (int i=0; i<length-1; i++)
	{
		for (int j=0; j<length-1-i; j++)
		{
			if(strcmp(str_arr[j], str_arr[j+1]) > 0)
			{
				strcpy(temp, str_arr[j]);
				strcpy(str_arr[j], str_arr[j+1]);
				strcpy(str_arr[j+1], temp);
			}
		}
	}
}
