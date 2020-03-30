/*
 * inicio.c
 *
 *  Created on: 21 mar. 2020
 *      Author: Victor
 */
#include <stdio.h>
#include <stdlib.h>
#include "menup.h"

void imprimir_inicio(){
	printf("¡Bienvenido, seleccione una opción para continuar! \n");
	printf("1. Iniciar sesión  \n");
	printf("2. Registrarse  \n");
	printf("3. Continuar sin registrarse  \n");
	printf("4. Salir  \n");
}

void iniciar_programa(){
	int opcion;
	char str[20];
	int numerosSocio = 4;
	imprimir_inicio();
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%i", &opcion);
	printf("Has seleccionado la opción %i \n ", opcion);

	if(!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4)){
		while (!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4))
		{
			printf("No ha pulsado ninguna opción correcta\n");
			fflush(stdout);
			scanf("%i", &opcion);
		}
	}

	if(opcion == 1){
		iniciarSesion(numerosSocio);
		numerosSocio++;
	}
	if(opcion == 2){
		nuevoSocio(numerosSocio);
	}
	if(opcion == 3){
		iniciar_menu();
	}
	if(opcion == 4){
		exit(0);
	}
}

