/*
 * equipo.h
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#ifndef EQUIPO_H_
#define EQUIPO_H_
#include <stdio.h>

typedef struct{
	char nombre[20];
	char ciudad[20];
	char provincia[20];
	int anyoFundacion;
	char estadio[20];
}Equipo;

void mostrarDatosEquipo();

void mostrarCiudadEquipo(Equipo);

void mostrarProvinciaEquipo(Equipo);

void mostrarAnyoFundacionEquipo(Equipo);

void mostrarEstadioEquipo(Equipo);

#endif /* EQUIPO_H_ */
