// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicios de Farenheit a Celsius 
int main() {
	
	float farenheit = 0.0 , celsius = 0.0;
	printf("\nIntroduce la temperatura en grados Farenheit: ");
	scanf("%f", &farenheit);
	celsius = (farenheit - 32) * 5/9 ;
	printf("\nLa temperatura en grados Celsius es: %.2f\n", celsius);
	return 0;

}