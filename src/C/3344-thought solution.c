/*
 * 3344 - Brute
 * Author: Otavio
 * Date: 05/03/2024
 */
#include <stdio.h>

int
getlen(int);

int
main()
{
	int x;
	scanf("%d", &x);

	for(int i=0; i<1000; i++)
	{
		x = getlen(x);
	}

	printf("%d\n", x);
	return 0;
}

int
getlen(int number)
{
	switch(number)
	{
		case 1:
			return 3; // one
		case 2:
			return 3; // two
		case 3:
			return 5; // three
		case 4:
			return 4; // four
		case 5:
			return 4; // five
		case 6:
			return 3; // six
		case 7:
			return 5; // seven
		case 8:
			return 5; // eight
		case 9:
			return 4; // nine
		case 10:
			return 3; // ten
		case 11:
			return 6; // eleven
		case 12:
			return 6; // twelve
		case 13:
			return 8; // thirteen
		case 14:
			return 8; // fourteen
		case 15:
			return 7; // fifteen
		case 16:
			return 7; // sixteen
		case 17:
			return 9; // seventeen
		case 18:
			return 8; // eighteen
		case 19:
			return 8; // nineteen
		case 20:
			return 6; // twenty
		case 30:
			return 6; // thirty
		case 40:
			return 5; // forty
		case 50:
			return 5; // fifty
		case 60:
			return 6; // sixty
		case 70:
			return 7; // seventy
		case 80:
			return 6; // eighty
		case 90:
			return 6; // ninety
		case 100:
			return 11; // one hundred
		default: // twenty-three
			return getlen(number-(number%10)) + 1 + getlen(number%10);
	}
}
