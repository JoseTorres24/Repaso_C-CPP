#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Guardado para otras mas adelantes
/*
        while (scanf("%d", &numAnio) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar anio de nacimiento: ");
        }

*/
// Ejercicios Avanzados de Estructuras repetitivas (Numero Magico)

int main()
{
    char c;
    int numDia = 0;
    int numMes = 0;
    int numAnio = 0;
    int sumaFecha = 0;
    int sumaNumeroFecha[4] = { 0 };
    int i = 0;
    int numeroMagico = 0;
    int dias_Meses[12] = { 31,28,31, 30,31,30,31,31,30,31,30,31};
    do
    {
        printf("\nIngresar mes de nacimiento: ");
        while( scanf("%d",&numMes) != 1){
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar mes de nacimiento: ");
        }

    } while (numMes < 1 || numMes > 12);
    do
    {
        printf("\nIngresar dia de nacimiento: ");
        while (scanf("%d", &numDia) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar dia de nacimiento: ");
        }

    }while (numDia < 1 || numDia > dias_Meses [numMes - 1]);
    do
    {
        printf("\nIngresar anio de nacimiento: ");
        while (scanf("%d", &numAnio) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar anio de nacimiento: ");
        }
    } while (numAnio < 0);

    sumaFecha = numDia + numMes + numAnio;

    while (sumaFecha > 0) {

        sumaNumeroFecha[i] = sumaFecha % 10;
        sumaFecha /= 10;
        numeroMagico += sumaNumeroFecha[i];
        i++;
    }
    printf("\nEsta es tu fecha de cumpleanios\n");
    printf("%d\t%d\t%d\n", numDia, numMes, numAnio);
    printf("\nEste es tu numero magico: %d\n",numeroMagico);
    





    system("pause");
    system("cls");
    return 0;
}
