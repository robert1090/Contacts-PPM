#ifndef MENU_H /*MENU_H*/
#define MENU_H

/**
 * @brief Esta funcion se encargara de redirigir al usuario a la funcion deseada del programa
 * 
 * @return int Menu de Opciones
 */
int menu();

/* Opciones del Menu de Agenda de Contactos */
enum Opciones{
    REG_CONT = 1,
    EDIT_CONT,
    ELIM_CONT,
    VER_CONT,
    EXIT
};

#endif /*MENU_H*/