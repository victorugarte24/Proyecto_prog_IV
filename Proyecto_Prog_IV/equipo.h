/*
 * equipo.h
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#ifndef EQUIPO_H_
#define EQUIPO_H_

typedef struct{
	char *nombre;
	char *ciudad;
	char *provincia;
	int anyoFundacion;
	char *estadio;
}Equipo;

void menu_equipos();

#endif /* EQUIPO_H_ */
