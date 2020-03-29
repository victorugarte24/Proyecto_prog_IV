/*
 * entradas.h
 *
 *  Created on: 26 mar. 2020
 *      Author: Victor
 */

#ifndef ENTRADAS_H_
#define ENTRADAS_H_

#include "partido.h"

typedef struct{
	int numEntradas;
	int numFila;
	char *Sector;
	int precioEntrada;
	int PrecioTotal;
	Partido *partido;

}Entradas;

void imprimir_ticket(Entradas entrada);
void imprimir_entrada();
void comprar_entradas();
int calcular_precio(int Sector, int numFila);

#endif /* ENTRADAS_H_ */
