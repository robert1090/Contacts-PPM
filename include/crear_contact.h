#ifndef CREAR_CONTACT_H /*CREAR_CONTACT_H*/
#define CREAR_CONTACT_H

#include <stdbool.h>
#include <stddef.h>

/* Estructura de Contactos */
typedef struct
{
    char nombre [50];
    char numero [15];
    char direccion [150];
    bool full;
} Contacto;

/**
 * @brief 
 * 
 */
void inicializando_estructura(Contacto *contactos[]);

/**
 * @brief Funcion que se encargara de crear el contacto
 * 
 * @param nombre Nombre del Contacto
 * @param numero Numero del Contacto
 * @param direccion Direccion del Contacto
 * @return true 
 * @return false 
 */
bool crear_contacto(Contacto *contactos[]);


#endif /*CREAR_CONTACT_H*/