/*
 * 1049 - Animal
 * Author: Otavio
 * Date: 21/03/2024
 */
#include <stdio.h>

int
main()
{
	char first[12];
	char second[8];
	char third[10];

	scanf("%s", first);
	scanf("%s", second);
	scanf("%s", third);

	if (first[0] == 'v') // vertebrado
		if (second[0] == 'a') // ave
			if (third[0] == 'c') // carnivoro
				printf("aguia");
			else // onivoro
				printf("pomba");
		else // mamifero
			if (third[0] == 'o') //onivoro
				printf("homem");
			else // herbivoro
				printf("vaca");
	else // invertebrado
		if (second[0] == 'i') // inseto
			if (third[2] == 'm') // hematofago
				printf("pulga");
			else // herbivoro
				printf("lagarta");
		else // anelideo
			if (third[0] == 'h') // hematofago
				printf("sanguessuga");
			else // onivoro
				printf("minhoca");

	printf("\n");
}
