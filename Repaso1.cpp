// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



//Ejercicios de (Estructuras repetitivas)
//Sencillos
int main() {
	int i = 0;
	printf("\n\tLista de numeros\n\n");
	for (i = 1; i <= 100; i++) {
		printf("\tNumero %d\n\n", i);
	}

	printf("\n\tLista de numeros\n\n");
	for (i = 1; i <= 100; i = i + 2) {
		printf("\t\tNumero %d\n\n", i);
		if (i == 99) {
			printf("\t\tNumero %d\n\n", i + 1);
		}
	}
	
	printf("\n\tLista de numeros\n\n");
	for (i = 100; i >= 1; i --) {
		printf("\t\tNumero %d\n\n", i);

	}
	
	system("pause");
	return 0;
}
