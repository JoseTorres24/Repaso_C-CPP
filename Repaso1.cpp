// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Ejercicio de interes y capital
int main() {
	float dinero = 0.0, interes = 0.0,total = 0.0;

	printf("\nIntroduce el capital inicial: ");
	scanf("%f", &dinero);
	printf("\nRecuerda que pongas el numero del porcentaje que se esta aplicando");
	printf("\nIntroduce el interes que se esta aplicando: ");
	scanf("%f", &interes);
	total = (dinero * interes / 100);
	printf("\nEl total de interes es: %.2f", total);
	return 0;
}