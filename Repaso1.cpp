// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Ejercicio de Verificacion (root y password) (WHILE Y VALIDACION)
//Sencillos
#define MAX_tamanio 5

int main() {
	int intentos = 0;
	char nombre[MAX_tamanio];
	char c; // la usaremos como variable de apoyo para no tener problemas con cadenas excedentes
	int contrasenia = 0;

	
	while (intentos != 3) {
		//Para cadenas y se exceda el numero de datos
		printf("\nIngresar nombre para verificacion:");
		//Vamo a explicarlo, primero lo que haremos es de la variable
		// tomaremos su espacio, luego el tamanio del arreglo de la variable pero solo de la entrada (stdin),
		//y lo que hace el while es tomar lo excendente hasta al ultimo caracter de la cadena ingresada pero
		//se supone que eso tendria que dar 0 si todo fuera correcto, pero evitamos si no es correcto que lo excendete
		// de la cadena no sobrepase la entrada solicitada
		if (fgets(nombre, MAX_tamanio, stdin) != 0) {
			while ((c = getchar()) != EOF && c != '\n');
		}
		// Para que solo sean numeros, tal cual como el ejemplo anterior, checamos si hace correctamente la entrada
		// para eso usamos scanf que devuelve valores entre 0 y 1 si la lectura es 0 significa que no se hice bien
		// y obtenemos todos los caracteres para que no afecten a las demas cadenas de entrada
		printf("\nIngresar contrasenia: ");
		if (scanf("%d", &contrasenia) != 1) {
			printf("\nSolo numeros");
		}
		while(getchar()!= '\n');
		//Simple comparacion
		if (strcmp(nombre, "root") == 0 && contrasenia == 1234) {
			printf("\nBienvenido al sistema\n");
			return 0;
		}

		intentos++;
	
	}
	if (intentos == 3) {
		printf("\nSuperaste la cantidad de intentos\n");
	}

	system("pause");
	system("cls");
	
	return 0;
}
