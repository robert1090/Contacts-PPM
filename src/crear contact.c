#include <stdio.h>
#include <stdbool.h>
#include "../include/menu.h"
#include "../include/crear contact.h"
FILE *Contactos;

bool crear_contacto(char *nombre, unsigned int numero, char *direccion, bool temp)
{
    char opcion[5];
    do
    {
        Contactos = fopen("Contactos.txt", "a+");

        printf("\t Crear Contacto\n"
               "\t Ingrese el Nombre del Contacto: ");
        sscanf(nombre, sizeof(nombre), Contactos);

        printf("\n\tIngrese el Numero Telefonico: ");
        sscanf(numero, sizeof(temp), Contactos);

        printf("\n\tIngrese la Direccion: ");
        sscanf(direccion, sizeof(direccion), Contactos);

        printf("\nDesea crear otro contacto?(Si o No)");
        scanf("%s", opcion);
        getch();
    } while (opcion != 'no' || opcion != 'No');

    fclose(Contactos);

    menu();

}