/* Librerias a usar */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../include/crear_contact.h"
#include "../include/menu.h"

#define MAXIMO 100

/* Funcion para inicializar la estructura y su base de datos */
void inicializando_estructura(Contacto contactos[])
{
    for (size_t i = 0; i < MAXIMO; i++)
    {
        contactos[i].full = false;
    }
    
}

/* Funcion que se encargara de crear los contactos */
void crear_contacto(Contacto contactos[])
{
    char opcion; /* Variable de Opciones */
    int i = 0; 

    do
    {
        printf("\t Crear Contacto\n"
               "\t Ingrese el Nombre del Contacto: ");
        fgets(contactos[i].nombre, sizeof(contactos[i].nombre), stdin);
        contactos[i].nombre[strlen(contactos[i].nombre)-1] = '\0';
        
        printf("\n\tIngrese el Numero Telefonico: ");
        scanf("%s", contactos[i].numero);
        getchar();

        printf("\n\tIngrese la Direccion: ");
        fgets(contactos[i].direccion, sizeof(contactos[i].direccion), stdin);
        contactos[i].direccion[strlen(contactos[i].direccion)-1] = '\0';

        printf("\nDesea crear otro contacto?(S o N)");
        scanf("%c", &opcion);
        getchar();

        contactos[i].full = true;

        i++;

        system("cls||clear");

        if (opcion == 'n' || opcion == 'N')
        {
            system("cls||clear");
            break;
        }
        

    } while (1);


    menu();

}