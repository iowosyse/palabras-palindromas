#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("Ingrese una cadena: ");
    char cadena[30];
    //recibe el input
    gets(cadena);

    //variables a trabajar
    int aux = 0, cadenaLength = 1;
    bool sonIguales = 0;

    //obtiene el número de caracteres diferentes de espacio
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ')
            cadenaLength++;
    }

    //crea y llena el arreglo de caracteres sin espacios
    char sinEspacios[cadenaLength];

    for (int i = 0; cadena[i] != '\0' ; i++) {
        if (cadena[i] != ' ') {
            sinEspacios[aux] = cadena[i];
            aux ++;
        }
    }

    //reduce en uno porque dentro del ciclo se pasa en uno cuando entra al condicional en la última iteración
    aux -= 1;

    //revisa si la cadena es palindroma
    for (int i = 0; i < cadenaLength / 2; ++i) {
        if (sinEspacios[i] == sinEspacios[aux])
            sonIguales = 1;
        else {
            sonIguales = 0;
            break;
        }

        aux --;
    }

    if (sonIguales == 1)
        printf("La cadena es, en efecto, palindroma");
    else
        printf("La cadena no es palindroma");

    return 0;
}