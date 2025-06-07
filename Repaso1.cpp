// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//Ejercicios estructuras repetitivas (Avanzados 1)


int main() {
	int mostrarNumeros = 1;
	int Grupo = 0;
	int contador = 0;
	int continuar = 1;
	while (continuar != 0) {
		contador = 0;
		printf("\nGrupo %d\n",Grupo + 1);
		while (contador != 20)
		{
			printf("\n%d",mostrarNumeros);
			mostrarNumeros++;
			contador++;

		}
		Grupo++;

		printf("\n");
		system("pause");
		system("cls");

		if (contador == 20) {

			if (Grupo == 50) {
				printf("\nSe han Mostrado todos los numeros\n");
				system("pause");
				system("cls");
				continuar = 0;
				contador = 0;
				Grupo = 0;
				return 0;

			}
			else
			{
				printf("\n\nQuiere que se muestre el siguiente grupo de numeros (1 - Si)(0 - No): ");
				while (scanf("%d", &continuar) != 1) {
					while (getchar() != '\n');
					system("cls");
					printf("\nQuiere que se muestre el siguiente grupo de numeros (1 - Si)(0 - No): ");
				}
			}

		}
	}

	system("pause");
	system("cls");
	
	return 0;
}
