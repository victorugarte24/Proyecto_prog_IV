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
	char *equipoLocal;
	char *equipoVisitante;
}Partido;

void mostrarEquipos(Partido p);

#endif /* PARTIDO_H_ */
