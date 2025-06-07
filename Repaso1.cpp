#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ejercicios Avanzados de estructuras repetitivas (El mas Repetido)
int main() {
	
	int numero = 1;
	int numerosAgregados = 0;
	int numeroMasRep = 0;
	int mayor = 0; //Variable auxiliar para poder encontrar el numero mayor del arreglo
	//desordenado que se supone que me dara la posicion del arreglo en los dos arreglos dinamicos, 
	int cantidadVeces = 0;
	int* numeros = NULL;
	int* cantidadRepetidos = NULL; //Muchos valores se repetiran pero no se como hacerlo de otra manera
	int* temporal = NULL; // para poder reasignar la memoria
	int i = 0;
	int j = 0;// Realmente no se si puede hacer con un solo recorrido, no soy tan bueno ;c 

	// vamo a pone un espacio determinado de memoria basandonos en un arreglo int *
	numeros = (int*)malloc(sizeof(int));

	while (numero != 0) {
		while (scanf("%d", &numero) != 1) {
			while (getchar() != '\n');
			system("cls");			
		}
		if (numero == 0) {
			printf("\nSaliendo del programa, se mostraran los datos siguientes...\n");
		}
		else { 
			system("cls");

			// Recolocamos la memoria pero solo tempor al porque luego perdera esa memoria de cierta manera para poder agregar u nuevo valor a numeros
			temporal = (int*)realloc(numeros, (numerosAgregados + 1) * sizeof(int));
			if (temporal == NULL) {
				printf("\nError: No se pudo asignar memoria.\n");//si no se asigna memoria correctamente
				free(numeros);
				return -1;
			}
			numeros = temporal; //le damos el espacio de temporal a numeros para que pueda tener otro element0
			//En su arreglo de  elementos dinamico

			numeros[numerosAgregados] = numero; //Agregamos un elemento al arreglo
			numerosAgregados++; // y aumentamos
			// Mostramos el arreglo realizar las operaciones 
			for (i = 0; i < numerosAgregados; i++) {
				printf("%d\t", numeros[i]);
				
			}
		}
	}
	cantidadRepetidos = (int*)malloc(numerosAgregados*sizeof(int));

	for (i = 0; i < numerosAgregados; i++) {
		cantidadVeces = 0;
		for (j = 0; j < numerosAgregados; j++) {
			if (numeros[j] == numeros[i]) {
				cantidadVeces++;
			}
		}
		cantidadRepetidos[i] = cantidadVeces;
	}
	for (i = 0; i < numerosAgregados; i++) {
		if (mayor < cantidadRepetidos[i]) {
			mayor = cantidadRepetidos[i];
			numeroMasRep = i;
		}
	}

	printf("\nEl numeros mas repetido es el %d y se ha escrito %d\n",(numeros[numeroMasRep]),cantidadRepetidos[numeroMasRep]);


	//XD creo que complique el ejercicio
	free(numeros);
	numeros = NULL;

	free(cantidadRepetidos);
	cantidadRepetidos = NULL;
	

	system("pause");
	system("cls");
	
	return 0;
}
//Me dio en la madre chat-gpt, pero con orgullo