/* librerias a usar */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../include/menu.h"
#include "../include/crear_contact.h"
#include "../include/editar_contact.h"
#include "../include/eliminar_contact.h"
#include "../include/ver_contact.h"

/* Inicializacion del Array */
#define MAXIMO 100

Contacto contactos[MAXIMO];

int menu() /* Menu Principal */
{
	system("color 47");

	unsigned Opcion = 0;

	/* Menu de Opciones de Agenda de Contactos */
	printf("Bienvenido a la Agenda de Contactos\n"
			"Por favor, eliga una de las siguientes opcines:\n\n"
			"1)Registrar Contactos\n"
			"2)Editar Contacto\n"
			"3)Eliminar Contacto\n"
			"4)Ver Lista de Contactos\n"
			"5)Salir\n");
	scanf("%u", &Opcion);
	getchar();

	switch (Opcion)
	{
	case REG_CONT:
		/* Redirige a la Funcion */
		system("cls");
		crear_contacto(&contactos);
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
		ver_contacto(&contactos);
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