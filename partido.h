/*
 * partido.h
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#ifndef PARTIDO_H_
#define PARTIDO_H_
#include "equipo.h"

typedef struct{
	 Equipo eqLocal;
	 Equipo eqVisitante;
	 char hora[20];
	 char estadio[20];
}Partido;


Partido partidos[10];

void cargar_partidos();
void menu_partidos();

#endif /* PARTIDO_H_ */
