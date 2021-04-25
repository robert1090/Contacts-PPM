
/* librerias a usar */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../include/menu.h"
#include "../include/database.h"
#include "../include/crear contact.h"
#include "../include/editar contact.h"
#include "../include/eliminar contact.h"
#include "../include/ver contact.h"

int menu() /* Menu Principal */
{
	unsigned Opcion = 0;

	/* Menu de Opciones de Agenda de Contactos */
	printf("Bienvenido a la Agenda de Contactos\n"
			"Por favor, eliga una de las siguientes opcines:\n\n"
			"1)Registrar Contactos\n"
			"2)Editar Contacto\n"
			"3)Eliminar Contacto\n"
			"4)Ver Lista de Contactos\n"
			"5)Salir\n");
	scanf("%d", &Opcion);

	switch (Opcion)
	{
	case REG_CONT:
		/* Redirige a la Funcion */
		system("cls||clear");
		return crear_contacto();
		break;

	case EDIT_CONT:
		/* Redirige a la Funcion */
		system("cls||clear");
		return;
		break;
	
	case ELIM_CONT:
		/* Redirige a la Funcion */
		system("cls||clear");
		return;
		break;

	case VER_CONT:
		/* Redirige a la Funcion */
		system("cls||clear");
		return;
		break;

	case EXIT:
		/* Causa que el usuario cierre el programa */
		system("cls||clear");
		printf("El Programa se cerrara a continuacion...");
		getchar();
		break;
	
	default:
		printf("Opcion no valida, cerrando sistema...");
		getchar();
		break;
	}

	return (0);
}