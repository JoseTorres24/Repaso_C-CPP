// Repaso1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



//Ejercicio de calcular la paga de un trabajador (IF, IF-ELSE)
int main() {
	
	float horasTrabajadas = 0;
	float horaPagada = 0;
	float paga = 0;

	printf("\nIngresar lo que se pagara por hora: ");
	scanf("%f", &horaPagada);
	printf("\nIngresar cantidad de horas trabajadas: ");
	scanf("%f", &horasTrabajadas);

	if(horasTrabajadas <= 40 || horasTrabajadas > 0){
		paga = horasTrabajadas * horaPagada;
	}
	else {
		if (horasTrabajadas > 40 || horasTrabajadas < 50)
		{
			paga = horasTrabajadas* (horaPagada*(1.5));
		}
		if (horasTrabajadas >= 50) {
			paga = horasTrabajadas * (horaPagada * (2.0));

		}
	}

	printf("\nLa paga del trabajador es: %.2f\n", paga);


	system("pause");
	return 0;
}
