#ifndef CREAR_CONTACT_H /*CREAR_CONTACT_H*/
#define CREAR_CONTACT_H

#include <stdbool.h>
#include <stddef.h>

/* Estructura de Contactos */
struct contacto
{
    char *nombre [50];
    int numero;
    char *direccion [150];
}cont;

/**
 * @brief Funcion que se encargara de crear el contacto
 * 
 * @param nombre Nombre del Contacto
 * @param numero Numero del Contacto
 * @param direccion Direccion del Contacto
 * @return true 
 * @return false 
 */
bool crear_contacto(char *nombre, unsigned int numero, char *direccion, bool temp);


#endif /*CREAR_CONTACT_H*/