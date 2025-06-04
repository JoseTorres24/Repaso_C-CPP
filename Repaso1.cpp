// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	char Caracter;
	
	printf("\nIngresar un caracter para determinar si es vocal: ");
	Caracter = getchar();
	
	
	switch (Caracter)
	{
		case 'a':case 'e':case'o': case'i': case'u':
		case 'A':case 'E':case'O': case'I': case'U': {
			printf("\nEs vocal carallo");
			break;
		}
		default: {
			printf("\nNo es vocal");
			break;
		}


	}
	//Con recurso de if / else
	if	(Caracter == 'a'|| Caracter == 'e'
		|| Caracter == 'i'|| Caracter == 'o' || Caracter == 'u'
		|| Caracter == 'A' || Caracter == 'E'|| Caracter == 'I'
		|| Caracter == 'O' || Caracter == 'U') {

		printf("\nEs vocal carallo otra vez");
		
	}
	else {
		printf("\nNo es vocal carallo otra vez");
	}
	return 0;
}