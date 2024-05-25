/*
 * 1383 - Sudoku
 * Author: Otavio
 * Date: 25/05/2024
 */
#include <stdio.h>
#include <string.h>

#define MATSIZE 9


int matrix[MATSIZE][MATSIZE];


int
subgames_valid();

int
rowcol_valid();


int
main()
{
	int n, ok;

	scanf("%d\n", &n);
	for(int k=1; k<=n; k++)
	{
		for(int i=0; i<MATSIZE; i++)
		       for(int j=0; j<MATSIZE; j++)
			       scanf("%d", &(matrix[i][j]));

		ok = (rowcol_valid() && subgames_valid());
		printf("Instancia %d\n%s\n\n", k, ok?"SIM":"NAO");
	}
	return 0;
}


int
rowcol_valid()
{
    int rows[MATSIZE];
	int cols[MATSIZE];
	int val;

	for(int i=0; i<MATSIZE; i++)
	{
	    memset(rows, 0, sizeof rows);
	    memset(cols, 0, sizeof cols);
		for(int j=0; j<MATSIZE; j++)
		{
			val = matrix[i][j]-1; // for row
			if(rows[val])
				return 0;
			rows[val]++;

			val = matrix[j][i]-1; // for column
			if(cols[val])
				return 0;
			cols[val]++;
		}
	}
	return 1;
}


int
subgame_valid(int x, int y)
{
	x *= 3; // find real game starting line
	y *= 3; // find real game starting column
	int values[MATSIZE];
	int val;

	memset(values, 0, sizeof values);
	for(int i=x; i<x+3; i++)
		for(int j=y; j<y+3; j++)
		{
			val = matrix[i][j]-1;
			if(values[val])
				return 0;
			values[val]++;
		}
	return 1;
}


int
subgames_valid()
{
	for(int x=0; x<3; x++)
		for(int y=0; y<3; y++)
			if(!subgame_valid(x, y))
				return 0;
	return 1;
}
