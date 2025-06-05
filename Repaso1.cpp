// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



//Ejercicio de calcular el area (Switch)
int main() {
	
	float baseMayor = 0, baseMenor = 0,Altura = 0;
	float area = 0;
	int seleccion = 0;
	printf("\n\t\t\t\tCALCULO DE AREAS");
	printf("\n\t\t\t\t===================================");
	printf("\n\t\t\t\t1.- Calcular area de triangulo");
	printf("\n\t\t\t\t2.- Calcular area de trapecio");
	printf("\n\t\t\t\t3.- Calcular area de rectangulo");
	printf("\n\t\t\t\tSeleccionar opcion: ");
	scanf("%d", &seleccion);

	switch (seleccion)
	{
		case 1: { 

			printf("\nIngresar altura: ");
			scanf("%f", &Altura);
			printf("\nIngresar la base: ");
			scanf("%f", &baseMayor);

			area = baseMayor * Altura / 2;
			break;
		}
		case 2: {
			printf("\nIngresar base menor: ");
			scanf("%f", &baseMenor);
			printf("\nIngresar base mayor: ");
			scanf("%f", &baseMayor);
			printf("\nIngresar altura: ");
			scanf("%f", &Altura);

			area = (baseMenor + baseMayor * (Altura)) / 2;
			break;
		}
		case 3: {
			printf("\nIngresar base: ");
			scanf("%f", &baseMayor);
			printf("\nIngresar altura: ");
			scanf("%f", &Altura);

			area = baseMayor * Altura;
			
			break;
		}

		default: {
			break;
		}
	}
	printf("\nEl valor del area de la figura seleccionada: %.2f\n", area);
	system("pause");
	return 0;
}
