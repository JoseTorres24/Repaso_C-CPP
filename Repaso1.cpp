// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//Ejercicios de estructuras de control IF (Valor de funcion)
int main() {
	float x = 0, y = 0;
	int resultado = 0;

	printf("\n x<=0 -> y = x + 3\n x>0 -> y = x^2 + 2x\n");
	printf("\nIngresar el valor de x = ");
	resultado = scanf("%f", &x);
	if (resultado == 0) {
		printf("\nError de lectura");
	}
	else {
		if (x <= 0) {
			y = x + 3;
		}
		if (x > 0) {
			y = pow(x,2) + (2 * x);
		}
		printf("\n y = %.2f", y);
	}
	x = 0;
	y = 0;

	return 0;
}