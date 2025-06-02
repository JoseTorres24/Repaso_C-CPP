// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Programa para calcular el para calcular minutos y seguntos a partir de segundos
int main() {
	int segundos, minutos, segundosRestantes;
	printf("Introduce el numero de segundos: ");
	scanf("%d", &segundos);
	minutos = segundos / 60; // Calcular minutos
	segundosRestantes = segundos % 60; // Calcular segundos restantes
	printf("%d segundos son %d:%d min.\n", segundos, minutos, segundosRestantes);
}