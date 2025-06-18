#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Para los idiomas
#include <locale.h>
#include <windows.h>

struct dniLetra {
    int num;
    char letra;
};



void idiomaEspañol();

//Ejercicio de DNI y Letra 

int dniCorrecto(int);
char dniCaracterCorrespondiente(int);

int main()
{
    idiomaEspañol();
    char c = NULL;
    int intentos = 0;
    int dniNum = 0;
    char caracterDni = NULL;
    
    while (dniCorrecto(dniNum) != 1){
        printf("\nIngresar DNI por favor: ");
        while (scanf("%d", &dniNum) != 1) {

            while ((c = getchar()) != EOF && c != '\n');
            system("cls");
            printf("\nIngresar DNI por favor: ");
           
        }

        if (dniCorrecto(dniNum) == 0) {
            printf("\nIngresar un nuevo valor, por favor!\n");
            system("pause");
            system("cls");
        }

    } 
    char cepo = dniCaracterCorrespondiente(dniNum);
    do
    {
        printf("\nIngresar el caracter correpodiente: ");
        caracterDni = _getch();
        if (!isalpha(caracterDni)) {
            printf("\nEl caracter ingresado no parece ser del alfabeto\n");
            system("pause");
            system("cls");
        }
     
    } while (!isalpha(caracterDni));
       
    caracterDni = toupper(caracterDni);
    printf("\n%c\n", caracterDni);

    

    if (cepo != caracterDni) {
        printf("\nEl caracter no es coincidente con el DNI\n El NIF no es correcto\n");

    }
    else {
        printf("\nEl caracter es coincidente con el DNI\n El NIF es correcto\n");
    }


}

int dniCorrecto(int dni) {

    int contador = 0;
    int resultado = 0;

    resultado = dni;

    while (resultado > 0) {
        resultado/= 10;
        contador++;
    }

    if (contador == 8) {
        return 1;
    }

    return 0; 
}
char dniCaracterCorrespondiente(int dni) {

    dniLetra resto[23] = {
        {0,'T'},
        {1,'R' },
        {2,'W'},
        {3,'A'},
        {4,'G'},
        {5,'M'},
        {6,'Y'},
        {7,'F'},
        {8,'P'},
        {9,'D'},
        {10,'X'},
        {11,'B'},
        {12,'N'},
        {13,'J'},
        {14,'Z'},
        {15,'S'},
        {16,'Q'},
        {17,'V'},
        {18,'H'},
        {19,'L'},
        {20,'C'},
        {21,'K'},
        {22,'E'}
    };
    
    char c = NULL;
    int resultado = dni;
    int i = 0;
    resultado %= 23;


    while (resto[i].num != resultado) {
        for (i = 0; i < 23 ; i++) {
            if (resto[i].num == resultado) {
                c = resto[i].letra;
                break;
            }
        }
    }
    printf("\n%c\n",c);

    return c;
}

void idiomaEspañol() {
    setlocale(LC_ALL, "spanish"); // Cambiar locale - Suficiente para máquinas Linux
    SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252);

}