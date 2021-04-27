#include <stdio.h>
#include "..\include\menu.h"
#include "..\include\ver contact.h"
#include "..\include\crear contact.h"

void ver_contacto(Contacto *contactos[])
{
    
    int i;
    
    do
    {
        for (i = 0; i <= 100; i++)
        {
            if (contactos[i]->full)
            {
                printf("Memoria Llena.");
            }
            

            fread(contactos[i]->nombre, sizeof(contactos[i]->nombre), i, stdin);
            printf("Nombre: %s\n", contactos[i]->nombre);
            fread(contactos[i]->numero, sizeof(contactos[i]->numero), i, stdin);
            printf("Nombre: %d\n", contactos[i]->numero);
            fread(contactos[i]->direccion, sizeof(contactos[i]->direccion), i, stdin);
            printf("Nombre: %s\n\n", contactos[i]->direccion);
        }
    } while (i < 101);

    printf("\nPresiona 'enter' para continuar...");
    getchar();
    system("cls||clear");
    menu();
}