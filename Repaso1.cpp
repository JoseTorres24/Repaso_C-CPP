// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//Ejercicios de estructuras de control IF (Cantidad de numeros par y suma de digitos en numero de solo dos cifras)
int main() {
	int ResultadoResto = 0;
	int ResultadoDivisiion = 0;
	int numero = 0;
	int resultado = 0; //Lectura
	int SumaDigitos = 0;
	int CantidadPares = 0;
	printf("\nIngresar el numero: ");
	resultado = scanf("%d", &numero);
	
	if (resultado == 0) {
		printf("\nError de lectura");
	}
	else
	{	//Verificar que el numero sea de dos digitos
		if (numero > 9 && numero < 99) {
			ResultadoResto = numero % 10;
			ResultadoDivisiion = numero / 10;
			SumaDigitos = ResultadoDivisiion + ResultadoResto;
			printf("\nLa suma de los digitos del numero %d",SumaDigitos);
			if (ResultadoResto % 2 == 0) {
				CantidadPares++;
			}
			if (ResultadoDivisiion % 2 == 0) {
				CantidadPares++;
			}
			printf("\nLa cantidad de numeros par que tiene el numero son: %d", CantidadPares);
		}
		printf("\nEl numero no es dos cifras");
	}
	return 0;
}