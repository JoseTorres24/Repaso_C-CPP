// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicio para poder visualizar el resuldo de una división entre enteros y reales
// y ver cómo se comporta el resultado dependiendo del tipo de dato utilizado.
// Se debe tener en cuenta que si se divide un entero entre un entero, el resultado es un entero truncado
// y si se divide un entero entre un real, el resultado es un real con decimales.
// Si se divide un real entre un entero, el resultado es un real con decimales.
// Si se divide un real entre un real, el resultado es un real con decimales.
// El resultado de la división entre enteros se trunca, mientras que el resultado de la división entre reales se muestra con decimales.


int main() {
	int i1, i2, i3;
	float r1, r2, r3;
	i1 = 12;
	i2 = 5;
	r1 = 12.0;
	r2 = 5;
	r3 = r1 / r2;
	printf("El resultado de la división es: %f\n", r3);
	r3 = i1 / i2;
	printf("El resultado de la división es: %f\n", r3);
	i3 = i1 / r2;
	printf("El resultado de la división es: %d\n", i3);
	
	return 0;
}