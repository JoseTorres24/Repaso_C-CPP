// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicio para calcular el área de un triángulo rectángulo

int main() {
	float area, base, altura;
	printf("Introduce la base del triángulo: ");
	scanf("%f", &base);
	printf("\nIntroduce la altura del triángulo: ");
	scanf("%f", &altura);
	area = (base * altura) / 2;
	printf("\nUn triangulo rectángulo de altura %.2f y base %.2f, tiene un área de %.2f",altura,base, area);


	return 0;
}