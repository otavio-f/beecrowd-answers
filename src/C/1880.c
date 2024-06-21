/*
 * 1880 - Renzo and the Palindromic Decoration
 * Author: Otavio
 * Date: 21/06/2024
 */
#include <stdio.h>

char repr[35]; // 2^31 em binario possui 34 caracteres

size_t
convert_base(int, const int);

int
is_palindrome(size_t);

int
main()
{
	int T;
	scanf("%d", &T);
	
	int N;
	size_t length;
	int has_one;
	while (T--)
	{
		scanf("%d\n", &N);
		has_one = 0;
		for(int b=2; b<=16; b++)
		{
			length = convert_base(N, b);
			if(is_palindrome(length))
			{
				printf("%s%d", (has_one?" ":""), b);
				has_one = 1;
			}
		}

		if(!has_one)
			puts("-1");
		else
			puts("");
	}
}


size_t
convert_base(int n, const int b)
{
	size_t i=0;
	do
	{
		repr[i] = n%b;
		repr[i] += (repr[i]<=9)?'0':'a'-10;
		i++;
		n /= b;
	} while(n);

	repr[i] = '\0';
	return i;
}

int
is_palindrome(size_t size)
{
	size--; // ajusta pra indice 0
	for(size_t i=0; i<=size/2; i++)
	{
		if(repr[i] != repr[size-i])
			return 0;
	}
	return 1;
}
