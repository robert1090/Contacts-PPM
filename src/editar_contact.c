/* Librerias a usar */
#include <string.h>
#include <stdio.h>
#include "../include/menu.h"
#include "../include/editar_contact.h"

void editar_contact(Contacto contactos[]) /* Funcion de Editar contactos */
{

    int i = 0;
    char temp[50]; /* Variable para buscar nombre */
    char Opcion;   /* Variable para el menu de eliminar */

    printf("\tBienvenido a Editar: \n\n"
           "Ingrese el Nombre del Contacto que desea editar: ");
    fgets(temp, sizeof(temp), stdin); /* Esta funcion se encargara de digitar el nombre del contacto a buscar */
    temp[strcspn(temp, "\n")] = 0;

    do
    {
        for (i = 0; i <= 100; i++) /* Busqueta de todos los posibles espacios de contactos */
        {
            if (contactos[i].full && contactos[i].eliminado == false) /* Si existe un contacto y no fue eliminado, este sera comparado*/
            {
                if (strcmp(contactos[i].nombre, temp) == 0) /* Si un contacto coincide, este sera seleccionado */
                {
                    /* Menu de Editar */
                    printf("\nSeleccione la informacion a Editar:\n"
                           "1) Nombre\n"
                           "2) Numero\n"
                           "3) Direccion\n"
                           "4) Salir\n\n"
                           "Informacion del Contacto Actual: \n");
                    printf("\nNombre: %s", contactos[i].nombre);         /* Mostrara Nombre del contacto */
                    printf("\nNumero: %s", contactos[i].numero);         /* Mostrara Numero del contacto */
                    printf("\nDireccion: %s\n", contactos[i].direccion); /* Mostrara Direccion del contacto */
                    scanf("%c", &Opcion);
                    getchar();

                    switch (Opcion)
                    {
                    case 1:

                        /* Edicion del Nombre */
                        printf("Nombre: ");
                        fgets(contactos[i].nombre, sizeof(contactos[i].nombre), stdin);
                        contactos[i].nombre[strcspn(contactos[i].nombre, "\n")] = 0;

                        printf("Nombre cambiado, volviendo al Menu de Inicio...");
                        getchar();
                        system("cls||clear");
                        menu();

                        break;

                    case 2:

                        /* Edicion del Numero */
                        printf("Numero: ");
                        fgets(contactos[i].numero, sizeof(contactos[i].numero), stdin);
                        contactos[i].numero[strcspn(contactos[i].numero, "\n")] = 0;

                        printf("\nNumero cambiado, volviendo al Menu de Inicio...");
                        getchar();
                        system("cls||clear");
                        menu();

                        break;

                    case 3:

                        /* Edicion de la Direccion */
                        printf("Direccion: ");
                        fgets(contactos[i].direccion, sizeof(contactos[i].direccion), stdin);
                        contactos[i].direccion[strcspn(contactos[i].direccion, "\n")] = 0;

                        printf("\nDireccion cambiada, volviendo al Menu de Inicio...");
                        getchar();
                        system("cls||clear");
                        menu();

                        break;

                    case 4:

                        /* Devuelta al Menu Principal */
                        printf("Volviendo al Menu de Inicio...");
                        getchar();
                        system("cls||clear");
                        menu();

                        break;

                    default:

                        /* Si la opcion no es valida */
                        printf("Opcion no valida, volviendo al Menu de Inicio...");
                        getchar();
                        system("cls||clear");
                        menu();
                        break;
                    }
                }
            }
        }
    } while (i < 101);

    if (strcmp(contactos[i].nombre, temp) != 0)
    {
        /* Si no coincide ningun contacto existente y que no haya sido eliminado, se devolvera al menu de inicio */
        printf("No existe un Contacto con ese nombre, volviendo al Menu Principal...");
        getchar();
        system("cls||clear");
        menu();
    }
}