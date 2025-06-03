// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ejercicios de estructuras de control IF (Entradas de cine)
int main() {

	float entradaCine = 7;
	int edadCliente = 0;
	int resultadoLectura = 0;//Procedimiento sencillo de lectura, solo sirve para repasar, solo sirve si se ingresan primero numeros, luego lo demas ya no importa
	
	printf("\nIngresar la edad del cliente: ");
	 resultadoLectura = scanf("%d", &edadCliente);
	 if (resultadoLectura == 0) {
		 printf("No se realizo correctamente la lectura, devolviendo un balor de %d", resultadoLectura);
	 }
	 

	 else {
		 if (edadCliente < 5) {
			 entradaCine -= (entradaCine * .60);
		 }
		 if (edadCliente > 60) {
			 entradaCine -= (entradaCine * .55);
		 }
		 printf("\nEl precio de su entrada de cine es %.2f", entradaCine);
	 }
	entradaCine = 0;
	edadCliente = 0;


	return 0;
}