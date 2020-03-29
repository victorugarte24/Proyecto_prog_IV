/*
 * menup.c
 *
 *  Created on: 21 mar. 2020
 *      Author: Victor
 */
#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "equipo.h"
#include "entradas.h"

void imprimir_menu(){
	printf("--------------------------\n ");
	printf("¡Seleccione una opción para continuar! \n");
	printf("1. Compra de entradas  \n");
	printf("2. Consultar datos sobre los estadios  \n");
	printf("3. Consultar resultados de los últimos partidos  \n");
	printf("4. Consultar datos del equipo  \n");
	printf("5. Salir  \n");
}

void iniciar_menu(){
	int opcion;
	imprimir_menu();
	fflush(stdout);
	scanf("%i", &opcion);
	printf("Has seleccionado la opción %i \n ", opcion);

	if(!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5)){
		while (!(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5))
		{
			printf("No ha pulsado ninguna opción correcta\n");
			fflush(stdout);
			scanf("%i", &opcion);
		}
	}
	if(opcion == 1){
		comprar_entradas();
	}
	if(opcion == 2){
		menu_estadios();
	}
	if(opcion == 3){
		menu_partidos();
	}
	if(opcion == 4){
		menu_equipos();
	}
	if(opcion == 5){
		exit(0);
	}
}

