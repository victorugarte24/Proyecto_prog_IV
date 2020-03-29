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
	printf("�Bienvenido, seleccione una opci�n para continuar! \n");
	printf("1. Iniciar sesi�n  \n");
	printf("2. Registrarse  \n");
	printf("3. Continuar sin registrarse  \n");
	printf("4. Salir  \n");
}

void iniciar_programa(){
	int opcion;
	imprimir_inicio();
	fflush(stdout);
	scanf("%i", &opcion);
	printf("Has seleccionado la opci�n %i \n ", opcion);

	if(!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4)){
		while (!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4))
		{
			printf("No ha pulsado ninguna opci�n correcta\n");
			fflush(stdout);
			scanf("%i", &opcion);
		}
	}

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
