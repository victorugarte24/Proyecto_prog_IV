/*
 * partido.h
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#ifndef PARTIDO_H_
#define PARTIDO_H_

typedef struct{
	char *golesGanador;
	char *golesPerdedor;
	char *equipoGanador;
	char *equipoPerdedor;
}Partido;

void mostrarResultado(Partido p);

void mostrarEquipos(Partido p);

#endif /* PARTIDO_H_ */
