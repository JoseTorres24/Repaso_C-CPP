// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Ejercicio de suma de tres variables enteras
int main() {
	printf("\nEjercicio de suma de tres variables enteras");// Imprime el título del ejercicio
	printf("\nResultado 1");
	printf("\n============================================"); // Imprime una línea de separación
	int a = 5;
	int b = 7;
	int c = 9;
	int suma = 0;
	suma = a + b + c; // Suma de las variables a, b y c
	printf("\nLa suma de %d, %d y %d es: %d\n", a, b, c, suma);// Imprime el resultado de la suma
	printf("\nResultado 2");
	printf("\n============================================"); 
	 a = 0;
	 b = 0;
	 c = 0;
	printf("\nIngrese el valor de a: "); 
	scanf("%d", &a);
	printf("\nIngrese el valor de b: ");
	scanf("%d", &b);
	printf("\nIngrese el valor de c: "); 
	scanf("%d", &c); 
	suma = a + b + c; // Suma de las variables a, b y c ingresadas por el usuario
	printf("\nLa suma de %d, %d y %d es: %d\n", a, b, c, suma); // Imprime el resultado de la suma ingresada por el usuario


	return 0;
}