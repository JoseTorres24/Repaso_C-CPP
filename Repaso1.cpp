// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//Ejercicios de estructuras de control IF (Numero menor a Numero mayor)
int main() {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int numeroMenor = 0;
	int numeroMedio = 0;
	int numeroMayor = 0;

	printf("\nIngresar numero 1: ");
	scanf("%d", &num1);
	printf("\nIngresar numero 2: ");
	scanf("%d", &num2);
	printf("\nIngresar numero 3: ");
	scanf("%d", &num3);

	numeroMenor = num1;
	numeroMedio = num2;
	numeroMayor = num3;
	//num1 = 5 num2 = 4 num3 = 2
	

	if (numeroMenor > numeroMedio && numeroMedio > numeroMayor) {
		numeroMayor = num1;
		numeroMenor = num3;
	}
	if (numeroMedio > numeroMayor && numeroMayor < numeroMenor) {
		numeroMayor = num2;
		numeroMedio = num1;
		numeroMenor = num3;
	}
	if (numeroMenor > numeroMayor && numeroMenor > numeroMedio && numeroMedio < numeroMayor) {
		numeroMayor = num1;
		numeroMedio = num3;
		numeroMenor = num2;

	}
	if (numeroMenor > numeroMedio) {
		numeroMedio = num1;
		numeroMenor = num2;
	}
	if (numeroMedio > numeroMayor) {
		numeroMedio = num3;
		numeroMayor = num2;
	}

	printf("Numero Menor: %d, Numero Medio: %d, Numero Mayor: %d", numeroMenor, numeroMedio, numeroMayor);





	return 0;
}