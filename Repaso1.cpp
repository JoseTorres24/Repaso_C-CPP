// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicio para calcular el �rea de un tri�ngulo rect�ngulo

int main() {
	float area, base, altura;
	printf("Introduce la base del tri�ngulo: ");
	scanf("%f", &base);
	printf("\nIntroduce la altura del tri�ngulo: ");
	scanf("%f", &altura);
	area = (base * altura) / 2;
	printf("\nUn triangulo rect�ngulo de altura %.2f y base %.2f, tiene un �rea de %.2f",altura,base, area);


	return 0;
}