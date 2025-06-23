#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>

#ifdef _WIN32
#define CLEAR "cls"
#define PAUSE "pause"
#include <conio.h>
#define get_char _getch
#else
#define CLEAR "clear"
#define PAUSE "read -p 'Presione Enter para continuar...' var"
#include <termios.h>
#include <unistd.h>

// Función para leer un solo carácter (similar a getch)
char get_char()
{
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#endif

struct dniLetra
{
    int num;
    char letra;
};

int dniCorrecto(int);
char dniCaracterCorrespondiente(int);

int main()
{
    int dniNum = 0;
    char caracterDni = '\0';
    char c = '\0';

    while (dniCorrecto(dniNum) != 1)
    {
        printf("\nIngresar DNI por favor: ");
        while (scanf("%d", &dniNum) != 1)
        {
            while ((c = get_char()) != EOF && c != '\n')
                ;
            system(CLEAR);
            printf("\nIngresar DNI por favor: ");
        }

        if (dniCorrecto(dniNum) == 0)
        {
            printf("\nIngresar un nuevo valor, por favor!\n");
            system(PAUSE);
            system(CLEAR);
        }
    }

    char cepo = dniCaracterCorrespondiente(dniNum);
    do
    {
        printf("\nIngresar el caracter correspondiente: ");
        caracterDni = get_char();
        printf("%c\n", caracterDni); // Mostrar lo que se ingresó

        if (!isalpha(caracterDni))
        {
            printf("\nEl caracter ingresado no parece ser del alfabeto\n");
            system(PAUSE);
            system(CLEAR);
        }

    } while (!isalpha(caracterDni));

    caracterDni = toupper(caracterDni);
    printf("\nLetra ingresada: %c\n", caracterDni);

    if (cepo != caracterDni)
    {
        printf("\nEl caracter no es coincidente con el DNI\nEl NIF no es correcto\n");
    }
    else
    {
        printf("\nEl caracter es coincidente con el DNI\nEl NIF es correcto\n");
    }

    return 0;
}

int dniCorrecto(int dni)
{
    int contador = 0;
    int resultado = dni;

    while (resultado > 0)
    {
        resultado /= 10;
        contador++;
    }

    return contador == 8;
}

char dniCaracterCorrespondiente(int dni)
{
    struct dniLetra resto[23] = {
        {0, 'T'}, {1, 'R'}, {2, 'W'}, {3, 'A'}, {4, 'G'}, {5, 'M'}, {6, 'Y'}, {7, 'F'}, {8, 'P'}, {9, 'D'}, {10, 'X'}, {11, 'B'}, {12, 'N'}, {13, 'J'}, {14, 'Z'}, {15, 'S'}, {16, 'Q'}, {17, 'V'}, {18, 'H'}, {19, 'L'}, {20, 'C'}, {21, 'K'}, {22, 'E'}};

    int resultado = dni % 23;

    for (int i = 0; i < 23; i++)
    {
        if (resto[i].num == resultado)
        {
            return resto[i].letra;
        }
    }

    return '?'; // En caso de error
}
