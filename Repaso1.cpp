// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicio del nombre del usuario y saludo
int main() {
	
	char nombre[30];
	
	printf("\nHola bienvenido!!");
	printf("\nPor favor, introduce tu nombre: ");
	scanf("%[^\n]", nombre);
	printf("\nHola %s, vamos a hacer un repaso de C.\n", nombre);

}