/*
 * partido.c
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#include <stdio.h>
#include "partido.h"

void mostrarEquipos(Partido p){
	printf("\nEquipos: \n %s - %s \n", p.equipoLocal, p.equipoVisitante);
}
