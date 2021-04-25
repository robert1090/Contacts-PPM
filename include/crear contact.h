#ifndef CREAR_CONTACT_H /*CREAR_CONTACT_H*/
#define CREAR_CONTACT_H

#include <stdbool.h>
#include <stddef.h>

/* Estructura de Contactos */
struct contacto
{
    char *nombre [50];
    int numero;
    bool temp;
    char *direccion [150];
};

bool crear_contacto(char *nombre, unsigned int numero, char *direccion, bool temp);


#endif /*CREAR_CONTACT_H*/