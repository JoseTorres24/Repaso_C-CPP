// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_ARRAY 10

//Ejercicios de arreglos con estructuras repetitivas
//Sencillos

int main() {
	
	int num[10] = {0};
	int sumaNums = 0;
	float prom = 0;
	int menor = 0;
	int mayor = 0;
	int i = 0;
	int j = 0;
	int aux = 0;

	for (i = 0; i < 10; i++) {
		printf("\nIngresar numero %d: ",i + 1);
		while (scanf("%d", &num[i]) != 1) { 
			while (getchar() != '\n'); 
			system("cls");
			printf("\nIngresar numero: ");
		}
		system("cls");
	}
	system("cls");

	for (i = 0; i < 10; i++) {
		sumaNums += num[i];
	}

	prom = sumaNums / (10.0f);
	//Ordenamiento de valores de menor a mayor (metodo de la burbuja)
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++) {
			if (num[i] > num[j]) {
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	//Mostrar valores
	printf("\n\t\t\t\t\tImpresion de valores\n");
	printf("\n\t\t\t=======================================\n");
	printf("\n\t\t\tLa suma de todos los numeros: %d", sumaNums);
	printf("\n\t\t\tEl promedio de los numeros  : %.2f", prom);
	printf("\n\t\t\tEl numero mayor del arreglo : %d", num[0]);
	printf("\n\t\t\tEl numero menor del arreglo : %d", num[9]);
	printf("\n\n\n");




	system("pause");
	system("cls");
	
	return 0;
}
