#include <stdio.h>
#include "..\include\menu.h"
#include "..\include\ver contact.h"
#include "..\include\crear contact.h"

FILE *Contactos;

void ver_contacto()
{
    Contactos = fopen("Contactos.txt", "r+");
    int i;

    do
    {
        for (i = 0; i <= 100; i++)
        {
            fread(cont.nombre, sizeof(cont.nombre), i, Contactos);
            printf("Nombre: %s\n", cont.nombre);
            fread(cont.numero, sizeof(cont.numero), i, Contactos);
            printf("Nombre: %d\n", cont.numero);
            fread(cont.direccion, sizeof(cont.direccion), i, Contactos);
            printf("Nombre: %s\n\n", cont.direccion);
        }
    } while (!feof(Contactos));

    printf("\nPresiona 'enter' para continuar...");
    getchar();
    system("cls||clear");
    menu();
}