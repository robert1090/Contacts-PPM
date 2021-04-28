#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../include/menu.h"
#include "../include/crear_contact.h"

#define MAXIMO 100

void inicializando_estructura(Contacto *contactos[])
{
    for (size_t i = 0; i < MAXIMO; i++)
    {
        contactos[i]->full = false;
    }
    
}

bool crear_contacto(Contacto *contactos[])
{
    char opcion;
    int i = 0;
    char temp;

    do
    {
        printf("\t Crear Contacto\n"
               "\t Ingrese el Nombre del Contacto: ");
        /*scanf("%s", contactos[i]->nombre);*/
        fgets(contactos[i]->nombre, sizeof(contactos[i]->nombre), stdin);
        contactos[i]->nombre[strlen(contactos[i]->nombre)-1] = '\0';
        
        printf("\n\tIngrese el Numero Telefonico: ");
        scanf("%s", contactos[i]->numero);
        getchar();

        printf("\n\tIngrese la Direccion: ");
        /*scanf("%s", contactos[i]->direccion);*/
        fgets(contactos[i]->direccion, sizeof(contactos[i]->direccion), stdin);
        contactos[i]->direccion[strlen(contactos[i]->direccion)-1] = '\0';

        printf("\nDesea crear otro contacto?(S o N)");
        scanf("%c", opcion);
        getchar();

        contactos[i]->full = true;

        i++;
    } while (opcion != 'n' || opcion != 'N');

    menu();

}