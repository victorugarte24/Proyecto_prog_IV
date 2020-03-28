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
	char *nombre;
	char *ciudad;
	char *provincia;
	int anyoFundacion;
	char *estadio;
}Equipo;

Equipo elegirEquipo(Equipo *, int);

void mostrarCiudadEquipo(Equipo *);

void mostrarProvinciaEquipo(Equipo *);

void mostrarAnyoFundacionEquipo(Equipo *);

void mostrarEstadioEquipo(Equipo *);

#endif /* EQUIPO_H_ */
