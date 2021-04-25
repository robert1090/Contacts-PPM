#include <stdio.h>
#include <stdbool.h>

bool crear_contacto(char *nombre, unsigned int numero, char *direccion, bool temp)
{

    printf("\t Crear Contacto\n"
            "\t Ingrese el Nombre del Contacto: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("\n\tIngrese el Numero Telefonico: ");
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%u", &numero);

    printf("\n\tIngrese la Direccion: ");
    fgets(direccion, sizeof(direccion), stdin);


}