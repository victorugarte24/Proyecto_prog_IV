/*
 * equipo.h
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#ifndef EQUIPO_H_
#define EQUIPO_H_

typedef struct{
	char nombre[20];
	char ciudad[20];
	char provincia[20];
	int anyoFundacion;
	char estadio[20];
}Equipo;

Equipo equipos[20];

#define iDrealMadrid 0
#define iDbarcelona	1
#define iDatleticoMadrid 2
#define iDbetis 3
#define iDathleticClub 4
#define iDvalencia 5
#define iDsevilla 6
#define iDespanyol 7
#define iDrealSociedad 8
#define iDcelta 9
#define iDvalladolid 10
#define iDlevante 11
#define iDvillarreal 12
#define iDmallorca 13
#define iDalaves 14
#define iDgranada 15
#define iDosasuna 16
#define iDgetafe 17
#define iDeibar 18
#define iDleganes 19

void cargar_equipos();
void menu_equipos();

#endif /* EQUIPO_H_ */
