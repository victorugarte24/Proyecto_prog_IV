/*
 * main.c
 *
 *  Created on: 19 mar. 2020
 *      Author: Victor
 */

#include "inicio.h"
#include "equipo.h"
#include "partido.h"

int main(void)
{
	cargar_equipos();
	cargar_partidos();
	inicializarSocios();
	iniciar_programa();

}
