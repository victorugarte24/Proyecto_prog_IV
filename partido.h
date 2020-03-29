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
Partido partidos_jornada_anterior[10];
void imprimir_partidos();
void imprimir_partido(int i);
void cargar_partidos();
void menu_partidos();
Partido devolver_partido(int partido);
void imprimir_jornada_anterior();

#endif /* PARTIDO_H_ */
