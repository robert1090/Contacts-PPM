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
    bool eliminado;
} Contacto;

/**
 * @brief Inicializacion de la estructura para poder utilizarla como base de datos
 * 
 */
void inicializando_estructura(Contacto contactos[]);

/**
 * @brief Funcion que se encargara de crear el contacto
 * 
 * @param nombre Nombre del Contacto
 * @param numero Numero del Contacto
 * @param direccion Direccion del Contacto
 */
void crear_contacto(Contacto contactos[]);


#endif /*CREAR_CONTACT_H*/