#include <stdio.h>
#include "../include/menu.h"
#include "../include/ver_contact.h"
#include "../include/crear_contact.h"

void ver_contacto(Contacto contactos[])
{

    int i;

    do
    {
        for (i = 0; i <= 100; i++)
        {
            if (contactos[i].full)
            {
                printf("\nNombre: %s", contactos[i].nombre);
                printf("\nNumero: %s", contactos[i].numero);
                printf("\nDireccion: %s\n", contactos[i].direccion);
            }
        }
    } while (i < 101);

    printf("\nPresiona 'enter' para continuar...");
    getchar();
    system("cls||clear");
    menu();
}