/*
 * partido.c
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#include <stdio.h>
#include "partido.h"

void mostrarResultado(Partido p){
	printf("\nResultado: \n G: %i VS. P: %i\n", p.golesGanador, p.golesPerdedor);
}

void mostrarEquipos(Partido p){
	printf("\nEquipos: \n G: %s VS. P: %s\n", p.equipoGanador, p.equipoPerdedor);
}
