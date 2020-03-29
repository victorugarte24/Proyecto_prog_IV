/*
 * estadio.h
 *
 *  Created on: 20 mar. 2020
 *      Author: Victor
 */

#ifndef ESTADIO_H_
#define ESTADIO_H_

typedef struct{
	char *nombre;
	char *equipo;
	char *ciudad;
	int anyoCreacion;
	int aforo;
}Estadio;

void menu_estadios();

#endif /* ESTADIO_H_ */
