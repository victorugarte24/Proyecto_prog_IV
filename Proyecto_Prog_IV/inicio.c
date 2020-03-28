/*
 * inicio.c
 *
 *  Created on: 25 mar. 2020
 *      Author: Victor
 */
#include <stdio.h>
#include <stdlib.h>
#include "menup.h"

void iniciar_programa(){
	int opcion;
	printf("¡Bienvenido, seleccione una opción para continuar! \n");
	printf("1. Iniciar sesión  \n");
	printf("2. Registrarse  \n");
	printf("3. Continuar sin registrarse  \n");
	printf("4. Salir  \n");
	fflush(stdout);
	scanf("%i", &opcion);
	printf("Has seleccionado la opción %i \n ", opcion);

	if(opcion == 1){

	}
	if(opcion == 2){

	}
	if(opcion == 3){
		iniciar_menu();
	}
	if(opcion == 4){
		exit(0);
	}
}

