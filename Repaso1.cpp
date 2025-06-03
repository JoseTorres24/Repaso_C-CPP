// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicios de estructuras de control con IF, IF-ELSE
int main() {

	int num1 = 0;
	int num2 = 0;
	
	//Ejercicio 1
	printf("\nEs mayor a 100 o no");
	printf("\nIntroducir el numero porfavor: ");
	scanf("%d", &num1);

	if (num1 > 100) {
		printf("\nEl numero es mayor que 100\n");
	}

	num1 = 0;
	
	//Ejercicio 2
	printf("\nEs divisible o no");
	printf("\nIntroducir el numero nuevamente: ");
	scanf("%d", &num1);

	printf("\nIntroducir el otro numero porfavor: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0) {
		printf("\nEs divisible el numero %d entre el numero %d\n", num1, num2);
	}
	num1 = 0;
	//Ejercicio 3
	printf("\nEl numero es par y es multiplo de 3\n");
	printf("\nIntroducir el numero nuevamente: ");
	scanf("%d", &num1);

	if (num1 % 2 == 0) {
		printf("\nEl numero es par");
		if (num1 % 3 == 0) {
			printf("\nY tambien es multiplo de 3\n");
		}
	}
	
	//Ejercicio 4
	num1 = 0;
	num2 = 0;
	printf("\nCual es mayor?\n");

	printf("\nIngresar nuevamente el numero 1: ");
	scanf("%d", &num1);
	

	printf("\nIngresar nuevamente el numero 2: ");
	scanf("%d", &num2);
	

	if (num1 > num2) {
		printf("\nEl numero %d es mayor a %d ", num1, num2);
	} 

	if (num2 > num1) {
		printf("\nEl numero %d es mayor a %d ", num2, num1);
	}

	if (num1 == num2) {
		printf("\nEl numero %d es igual a %d ", num1, num2);
	}


	return 0;
}