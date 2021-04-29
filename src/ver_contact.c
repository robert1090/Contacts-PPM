/* Librerias a usar */
#include <stdio.h>
#include "../include/menu.h"
#include "../include/ver_contact.h"
#include "../include/crear_contact.h"

/* Funcion que mostrara los contactos */
void ver_contacto(Contacto contactos[])
{

    int i;

    do
    {
        for (i = 0; i <= 100; i++) /* Apartado donde leera el espacio maximo en busca de contactos */
        {
            if (contactos[i].full && contactos[i].eliminado == false) /* Funcion que se encargara de verificar si existe un contacto y si no fue eliminado */
            {
                printf("\nNombre: %s", contactos[i].nombre); /* Mostrara Nombre del contacto */
                printf("\nNumero: %s", contactos[i].numero); /* Mostara Numero del Contacto */
                printf("\nDireccion: %s\n", contactos[i].direccion); /* Mostara Direccion del Contacto */
            }
        }
    } while (i < 101);

    printf("\nPresiona 'enter' para continuar...");
    getchar();
    system("cls||clear");
    menu();
}