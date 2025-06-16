#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Para los idiomas
#include <locale.h>
#include <windows.h>

// Ejercicios de Funciones (3 Ejercicios sencillos)

void problema1();
//Funciones para el problema 1
long potencia(int, int);

void problema2();
//Funciones para el problema 2
float maximo2valores(float, float);

void problema3();
//Funciones para el problema 3
void problema3Menu();
float triangulo();
float trapecio();
float rectangulo();

//Funcion main donde veremos los problemas
int main()
{
    setlocale(LC_ALL, "spanish"); // Cambiar locale - Suficiente para máquinas Linux
    SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252);
    int seleccionProblema = 0;
    char c = NULL;
    while (seleccionProblema != 4) {
        printf("Seleccion el problema que desea ver \n((1 - 3) - problemas disponibles)\n(4 - Salir)\nSeleccione un problema: ");
        while (scanf("%d", &seleccionProblema) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("Seleccion el problema que desea ver \n((1 - 3) - problemas disponibles)\n(4 - Salir)\nSeleccione un problema: ");
        }
        system("cls");
        switch (seleccionProblema) {
        case 1: {

            problema1();
            break;
        }
        case 2: {
            problema2();
            break;
        }
        case 3: {
            problema3();
            break;
        }

        }
        system("pause");
        system("cls");
    }
    system("pause");
    system("cls");
    return 0;
}
//Funciones para resolucion de los problemas
long potencia(int var1, int var2) {

    long resultado = 1;
    int i = 0;
    if (!(var1 == 0 && var2 == 0)) {
        if (var2 > 0) {
            while (i < var2) {
                resultado *= var1;
                i++;
            }
        }
        else
        {
            while (i > var2) {
                resultado /= var1;
                i--;
            }
        }
    }
    else
    {
        printf("\nError: No se puede realizar lo que estas pidiendo\n");
        resultado = 0;
        printf("\nSe mostrara un resultado en 0");
        
    }
    return resultado;
}
float maximo2valores(float var1, float var2){
    if ((var1 > var2)) {
        return var1;
    }
    else if( var1< var2)
    {
        return var2;
    }
}
void problema3Menu() {

    printf("\tCALCULO DE AREAS\n");
    printf("---------------------\n");
    printf("1 - Calcular Area de un triangulo\n");
    printf("2 - Calcular Area de un trapecio\n");
    printf("3 - Calcular Area de un rectangulo\n");
    printf("4 - Salir del programa\n");
    printf("Seleccione una opcion: ");

}
float triangulo() {
    float base = 0, altura = 0;
    float resultado = 0;
    char c;
    printf("Ingresar datos del triangulo\n");
    printf("Ingresar tamaño de la base del triangulo: \n");
    while (scanf("%f", &base) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la base del triangulo: \n");

    }
    printf("Ingresar tamaño de la altura del triangulo: \n");
    while (scanf("%f", &altura) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la altura del triangulo: \n");

    }
    resultado = base * altura / 2;
    return resultado;
}
float trapecio(){
    float baseMenor = 0,baseMayor = 0, altura = 0;
    float resultado = 0;
    char c;
    printf("Ingresar datos del trapecio\n");
    printf("Ingresar tamaño de la base menor del trapecio: \n");
    while (scanf("%f", &baseMenor) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la base menor del trapecio: \n");

    }
    printf("Ingresar tamaño de la base mayor del trapecio: \n");
    while (scanf("%f", &baseMayor) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la base mayor del trapecio: \n");

    }
    printf("Ingresar tamaño de la altura del triangulo: \n");
    while (scanf("%f", &altura) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la altura del triangulo: \n");

    }
    resultado = (baseMenor + baseMayor) * altura / 2;
    return resultado;
}
float rectangulo() {
    float base = 0, altura = 0;
    float resultado = 0;
    char c;
    printf("Ingresar datos del rectangulo\n");
    printf("Ingresar tamaño de la base del rectangulo: \n");
    while (scanf("%f", &base) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la base del rectangulo: \n");

    }
    printf("Ingresar tamaño de la altura del rectangulo: \n");
    while (scanf("%f", &altura) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("Ingresar tamaño de la altura del rectangulo: \n");

    }
    resultado = base * altura;
    return resultado;
}

//Problemas, solo son entradas de datos y mostrar datos
void problema1() {

    char c;
    int numero = 0, potencias = 0;
    long resultado = 0;
    printf("\t\tProblema 1: Numero y potencias\n\n");

    printf("\nIngresar numero a elevar: ");
    while (scanf("%d", &numero) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("\nIngresar numero a elevar: ");
    }
    printf("\nIngresar cuantas veces se elevara: ");
    while (scanf("%d", &potencias) != 1) {
        while ((c = getchar()) != EOF && c != '\n');
        system("cls");
        printf("\nIngresar cuantas veces se elevara: ");
    }

    resultado = potencia(numero, potencias);
    printf("\nEl resultado de elevar %d^%d es igual a %ld\n", numero, potencias, resultado);
    system("pause");
    system("cls");

}
void problema2() {

    float num1 = 0, num2 = 0, resultado1 = 0;;
    char c;
    printf("\t\tProblema 2: ¿Cual es el mayor de los 2?\n\n");

    do
    {
        printf("\nIngresar numero 1: ");
        while (scanf("%f", &num1) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar numero 1: ");
        }
        if (num1 < 0) {
            printf("\nIngresar solo numeros positivos\n");
            system("pause");
            system("cls");
        }
    } while (num1 < 0);
    do {
        printf("\nIngresar numero 2: ");
        while (scanf("%f", &num2) != 1) {
            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar numero 2: ");
        }
        if (num2 < 0) {
            printf("\nIngresar solo numeros positivos\n");
            system("pause");
            system("cls");
        }
    } while (num2 < 0);

    resultado1 = maximo2valores(num1, num2);

    printf("\nEl maximo de los 2 valores es %.2f\n", resultado1);

}
void problema3() {
    int seleccion = 0;
    float resultado = 0;
    char c;
    while (seleccion != 4) {
        problema3Menu();
        while (scanf("%d", &seleccion) != 1) {
            while ((c = getchar() != EOF && c != '\n'));
            system("cls");
            problema3Menu();
        }
        switch (seleccion) {

            case 1: {
                system("cls");
                resultado = triangulo();
                
                printf("El area del traingulo es de %.2f u^2\n",resultado);

                resultado = 0;
                break;
            }
            case 2: {
                system("cls");
                resultado = trapecio();
                printf("El area del trapecio es de %.2f u^2\n", resultado);

                resultado = 0;
                break;
            }
            case 3: {
                system("cls");
                resultado = rectangulo();
                printf("El area del rectangulo es de %.2f u^2\n", resultado);
                
                resultado = 0;
                break;
            }
            case 4: {
                system("cls");
                printf("Nos vemos\n");
                break;
            }
            default: {
                system("cls");
                printf("Seleccione una opcion valida\n");


                break;
            }
        }
        system("pause");
        system("cls");
    }
}

