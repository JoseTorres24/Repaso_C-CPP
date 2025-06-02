// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265358979323846
#include <stdio.h>

//Programa para calcular el perimetro de un circunferencia
int main() {
	float perimetro = 0.0, radio = 0.0 ;
	printf("Introduce el radio de la circunferencia (esto es en cm): ");
	scanf("%f", &radio);
	perimetro = 2 * PI * radio;
	printf("El perimetro de la circunferencia es: %.2f cm\n", perimetro);
	return 0;
}