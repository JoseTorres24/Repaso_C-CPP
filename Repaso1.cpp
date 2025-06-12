#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// Ejercicios Avanzados de Estructuras repetitivas (Metodo de Aproximaciones sucesivas) Raiz
int main()
{
    clock_t inicio = 0;
    clock_t final = 0;
    float initialD = 0;
    int iteraciones = 0;
    float raiz = 0;
    float diferencia = 0;
    float raizAproximacion = 0;
    double tiempo_transcurrido = 0;
    do 
    {
        printf("\nIntroduzca el valor para obtener su raiz: ");
        while (scanf("%f", &raiz) != 1) {
            while (getchar() != '\n');
            system("cls");
            printf("\nIntroduzca el valor para obtener su raiz: ");

        }

        printf("\nIntroduzca el valor inicial: ");
        while (scanf("%f", &initialD) != 1) {
            while (getchar() != '\n');
            system("cls");
            printf("\nIntroduzca el valor inicial: ");
            continue;
        }
        system("cls");
    }
    while ((initialD > raiz) || raiz < 0);

    inicio = clock();
    if (initialD < raiz) {
        //Primer rondeo 
        while (raizAproximacion <= raiz) {
            raizAproximacion = initialD * initialD;
            if (raizAproximacion == raiz) {
                break;
            }
            else {

                initialD++;

            }
         
            iteraciones++;
        }
        //Segundo Rondeo
        while (raizAproximacion >= raiz) {
            raizAproximacion = initialD * initialD;
            if (raizAproximacion == raiz) {
                break;
            }
            else {

                initialD -= 0.1;
            }
            
            iteraciones++;
        }
        //TercerRondeo
        while (raizAproximacion <= raiz) {
            raizAproximacion = initialD * initialD;
            if (raizAproximacion == raiz) {
                break;
            }
            else {

                initialD += 0.001;

            }
            
            iteraciones++;
        }
    }

    


    printf("\n\n Los Resultado obtenidos son los siguientes\n\n");
    printf("\nCantidad de iteraciones: %d ",iteraciones);
    printf("\nValor de resultado de multiplicacion de raices aproximada: %.2f", raizAproximacion);
    printf("\nValor de raiz aproximado: %.2f\n\n",initialD);
   
    final = clock();
    
    tiempo_transcurrido = (double)(final - inicio) / CLOCKS_PER_SEC;

    printf("\n\nEl tiempo de ejecucion es: %lf segundos\n\n", tiempo_transcurrido);


    system("pause");
    system("cls");

    return 0;
}