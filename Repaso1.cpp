

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long* numerosFactorial = NULL;
    unsigned long long aux = 0;
    unsigned long long resp = 1;
    unsigned long long* temp = NULL;
    unsigned long long elementosFactorial = 0;
    int numero = 1;
    int i = 0;

    numerosFactorial = (unsigned long long*)malloc(sizeof(unsigned long long));

    printf("\nIngresar el numero: ");
    while (scanf("%d", &numero) != 1) {
        while (getchar() != '\n');
        system("cls");
        printf("\nIngresar el numero: ");
        continue;
    }

    if (numero == 0) {
        resp = 1;
        aux = 0;
    }
    else {
        aux = numero;
        while (numero != 0)
        {
            temp = (unsigned long long*)realloc(numerosFactorial, (elementosFactorial + 1) * sizeof(unsigned long long));
            if (temp == NULL) {
                printf("\nError: No se pudo asignar memoria.\n");
                free(numerosFactorial);
                return -1;
            }
            numerosFactorial = temp;

            numerosFactorial[elementosFactorial++] = numero;
            numero--;
        }
        for (i = 0; i < elementosFactorial; i++) {
            resp *= numerosFactorial[i];
        }
    }
    printf("\nEl factorial de %llu es %llu\n", aux, resp);

    free(numerosFactorial);
    numerosFactorial = NULL;

    system("pause");
    system("cls");

    return 0;
}