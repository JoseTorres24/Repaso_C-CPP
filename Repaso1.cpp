// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Ejercicio de calcular la edad de una persona sin usar estructuras de control
int main() {
	int anioNacimiento = 0;
	int edad = 0;
	int result = 0;
	//Esto sirve para que no se muestre el warning de scanf

	printf("Hola\n");
	printf("Por favor de introducir el anio en el que nacio: ");
	scanf("%d", &anioNacimiento);
	edad = 2025 - anioNacimiento;
	printf("\nSi usted nacio en %d y este anio cumple %d anios\n",anioNacimiento,edad );
	
	return 0;
}