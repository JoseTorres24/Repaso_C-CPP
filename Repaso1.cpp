// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUM_ADIVINAR 50


//Ejercicios de arreglos con estructuras repetitivas (Adivinar el numero)
//Sencillos

int main() {
	int atinado = 0;
	int intentos = 0;
	while (atinado != NUM_ADIVINAR) {


			printf("\nIntenta adivniar el numero (1 - 100): ");
			while (scanf("%d",&atinado) != 1)
			{
				while (getchar() != '\n');
				system("cls");
				printf("\nIngresa valores correctos\n");
				system("pause");
				system("cls");
				printf("\nIntenta adivniar el numero (1 - 100): ");
			}
			if (atinado < 1 || atinado > 100) {
				printf("\nEl numero no es menor a 1, ni mayor a 100 ");
				system("pause");
				system("cls");
				intentos++;
			}

			if (atinado < NUM_ADIVINAR) {
				printf("\nEl numero es mas grande que el otro\n");
				system("pause");
				system("cls");
				intentos++;
			}

			if (atinado > NUM_ADIVINAR) {
				printf("\nEl numero es pequeño que el otro\n");
				system("pause");
				system("cls");
				intentos++;
			}
			
	}
	if (intentos < 5) {
		printf("\nEnhorabuena lo adivinaste\n");
	}

	if (intentos >= 5  && intentos < 10 ) {
		printf("\nNo lo hiciste nada mal eh\n");
	}

	if (intentos >= 10) {
		printf("\nEsta bien manin, tienes que mejorar\n");
	}


	system("pause");
	system("cls");
	
	return 0;
}
