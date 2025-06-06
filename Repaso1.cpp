// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//Ejercicios de Potencias x^y (WHILE Y VALIDACION)
//Sencillos

int main() {

	int x = 0, y = 0;
	int resultado = 1;
	int continuar = 1;
	int metodos = 0;


	while (continuar != 0) {
		while (x == 0 && y == 0)
		{
			//Metodos sencillos para validar enteros porque la verdad no me se otro

			printf("\nx = ");
			while (scanf("%d", &x) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("\nx = ");
			}

			printf("\ny = ");
			while (scanf("%d", &y) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("\ny = ");
			}

			if (x == 0 && y == 0) {
				printf("\nNo existe un valor correcto\n");
				system("pause");
				system("cls");
			}
		}
		system("cls");
		

		printf("Metodos para hacer x^y \n\n");
		printf("\n1.- Con la funcion pow");
		printf("\n2.- Sin la funcion pow");
		printf("\nSeleccione opcion: ");
		while (scanf("%d", &metodos) != 1)
		{
			while (getchar() != '\n');
			system("cls");
			printf("Metodos para hacer x^y \n\n");
			printf("\n1.- Con la funcion pow");
			printf("\n2.- Sin la funcion pow");
			printf("\nSeleccione opcion: ");
		}


		switch (metodos)
		{
			case 1: {
				resultado = pow(x, y);
				break;
			}
			case 2: {

				int i = 0;
				if (y == 0) {
					resultado = 1;
				}
				for (i = 0; i < y; i++) {
					resultado = resultado * x;
				}

				break;
			}
			default:
				printf("\nSeleecione una opcion valida");
				system("pause");
				system("cls");
				break;
		}
		system("cls");
		printf("\nEl resultado es %d", resultado);
		printf("\nDesea continuar (1 -> Si) (0 -> No): ");
		while (scanf("%d", &continuar) != 1) {
			while (getchar() != '\n');
			system("cls");
			printf("\nDesea continuar (1 -> Si) (0 -> No): ");
		}
		resultado = 0;
		 
	}

	system("pause");
	system("cls");
	
	return 0;
}
