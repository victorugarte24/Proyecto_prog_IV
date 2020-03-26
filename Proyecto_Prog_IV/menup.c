/*
 * menup.c
 *
 *  Created on: 25 mar. 2020
 *      Author: Victor
 */
#include <stdio.h>
#include <stdlib.h>

void iniciar_menu(){
	int opcion;
	printf(" --------------------------\n ");
	printf("¡Seleccione una opción para continuar! \n");
	printf("1. Compra de entradas  \n");
	printf("2. Consultar datos sobre los estadios  \n");
	printf("3. Consultar resultados de los últimos partidos  \n");
	printf("4. Consultar datos del equipo  \n");
	printf("5. Salir  \n");
	fflush(stdout);
	scanf("%i", &opcion);
	printf("Has seleccionado la opción %i \n ", opcion);
	if(opcion == 1){

	}
	if(opcion == 2){

	}
	if(opcion == 3){

	}
	if(opcion == 4){

	}
	if(opcion == 5){
		exit(0);
	}
}
