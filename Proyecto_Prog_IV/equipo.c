/*
 * equipo.c
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#include "equipo.h"
#include <stdio.h>
#include <string.h>
#define MAX_LINE 10

Equipo elegirEquipo(Equipo *e, int num){
	Equipo eq;
	printf("------------------\n Elige un equipo:\n");
	int i;
	int opcion = 150;
	while(opcion > num){
		for(i = 0; i < num; i++){
			printf("%i. %s\n",i + 1, e[i].nombre);
		}
		printf("\n\n");
		fflush(stdout);
		scanf("%i", &opcion);
		printf("%i",opcion);
	}

	fflush(stdout);
	eq.nombre = e[0].nombre;
	eq.ciudad = e[0].ciudad;
	eq.provincia = e[0].provincia;
	eq.anyoFundacion = e[0].anyoFundacion;
	eq.estadio = e[0].estadio;
	return eq;
}

void mostrarCiudadEquipo(Equipo *eq){
	printf("La ciudad a la que pertenece el equipo es %s", eq->ciudad);
}

void mostrarProvinciaEquipo(Equipo *eq){
	printf("La provincia a la que pertenece el equipo es %s", eq->provincia);
}

void mostrarAnyoFundacionEquipo(Equipo *eq){
	printf("El equipo se fundó en el año %i", eq->anyoFundacion);
}

void mostrarEstadioEquipo(Equipo *eq){
	printf("El equipo juega en el estadio %s", eq->estadio);
}

