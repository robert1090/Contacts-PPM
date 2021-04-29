/* Librerias a usar */
#include <stdio.h>
#include <string.h>
#include "../include/menu.h"
#include "../include/eliminar_contact.h"

void eliminar_contact(Contacto contactos[]) /* Funcion de eliminar contactos */
{

    char temp[50]; /* Variable para buscar nombre */
    char Opcion; /* Variable para el menu de eliminar */

    printf("\tBienvenido a Eliminar\n"
           "Ingrese el Nombre del Contacto a Eliminar: ");
    fgets(temp, sizeof(temp), stdin); /* Esta funcion se encargara de digitar el nombre del contacto a buscar */
    temp[strcspn(temp, "\n")] = 0;

    for (size_t i = 0; i <= 100; i++) /* Busqueta de todos los posibles espacios de contactos */
    {
        if (contactos[i].full && contactos[i].eliminado == false) /* Si existe un contacto y no fue eliminado, este sera comparado*/
        {
            if (strcmp(contactos[i].nombre, temp) == 0) /* Si un contacto coincide, este sera seleccionado */
            {
                /* Menu de Eliminar */
                printf("\nEsta seguro de que desea eliminar este contacto?(S o N)\n"
                       "\nInformacion del Contacto:");
                printf("\nNombre: %s", contactos[i].nombre); /* Mostrara Nombre del contacto */
                printf("\nNumero: %s", contactos[i].numero); /* Mostrara Numero del contacto */
                printf("\nDireccion: %s\n", contactos[i].direccion); /* Mostrara Direccion del contacto */
                scanf("%c", &Opcion);

                if (Opcion == 's' || Opcion == 'S')
                {
                    /* En caso de ser S la opcion, este sera eliminado */
                    contactos[i].eliminado = true;
                    printf("Contacto Eliminado con Exito, volviendo al Menu Principal...\n");
                    getchar();
                    system("cls||clear");
                    menu();
                }
                else
                {
                    /* En caso de ser N se devolvera al menu de inicio */
                    printf("Contacto no Eliminado, volviendo al Menu Principal...\n");
                    getchar();
                    system("cls||clear");
                    menu();
                }
            }
            else
            {
                /* Si no coincide ningun contacto existente y que no haya sido eliminado, se devolvera al menu de inicio */
                printf("No existe un Contacto con ese nombre, volviendo al Menu Principal...");
                getchar();
                system("cls||clear");
                menu();
            }
        }
    }
}