#include <stdio.h>
#include <stdbool.h>
#include "../include/menu.h"
#include "../include/crear contact.h"

#define MAXIMO 100

Contacto contactos[MAXIMO];

void inicializando_estructura()
{
    for (size_t i = 0; i < MAXIMO; i++)
    {
        contactos[i].full = false;
    }
    
}

bool crear_contacto()
{
    char opcion[5];
    int i = 0;
    do
    {
        
        printf("\t Crear Contacto\n"
               "\t Ingrese el Nombre del Contacto: ");
        fgets(contactos[i].nombre, sizeof(contactos[i].nombre), stdin);
        contactos[i].nombre[strlen(contactos[i].nombre)-1] = '\0';

        printf("\n\tIngrese el Numero Telefonico: ");
        fgets(contactos[i].numero, sizeof(contactos[i].numero), stdin);
        sscanf();

        printf("\n\tIngrese la Direccion: ");
        fgets(contactos[i].direccion, sizeof(contactos[i].direccion), stdin);

        printf("\nDesea crear otro contacto?(S o N)");
        scanf("%s", opcion);
        getchar();

        contactos[i].full = true;

        i++;
    } while (opcion != 'n' || opcion != 'N');

    menu();

}