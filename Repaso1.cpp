// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// valor maximo secuencial entre a, b y c
int main() {

	printf("Valor maximo secuencial entre a, b y c (Verificamos si es verdadero 1 y 0)\n");
	int a = 0, b = 0, c = 0;
	int maximo = 0;
	printf("\nIntroduzca el valor de la variable a: ");
	scanf("%d", &a);
	printf("\nIntroduzca el valor de la variable b: ");
	scanf("%d", &b);
	printf("\nIntroduzca el valor de la variable c: ");
	scanf("%d", &c);
	// Solo es necesario saber si a es mayor b o mayor c
    maximo = (a > b && a > c && b > c) ? 1 : 0;
	printf("El valor secuencial de los valores %d, %d y %d es : %d\n", a, b, c, maximo);
	return 0;
}