/*
 * pago.c
 *
 *  Created on: 25 mar. 2020
 *      Author: Victor
 */

#include <stdio.h>
#include <stdlib.h>
#include "pago.h"
#include <unistd.h>
#include <time.h>
#include "entradas.h"

void realizar_pago(){
	Pago p1;
	int opcion;
	printf("--------------------\n");
	printf("Introduzca su numero de tarjeta:\n");
	fflush(stdout);
	scanf("%i", &p1.numTarjeta);
	printf("Introduzca el mes de caducidad de la tarjeta:\n");
	fflush(stdout);
	scanf("%i", &p1.mes);
	printf("Introduzca el año de caducidad de la tarjeta:\n");
	fflush(stdout);
	scanf("%i", &p1.anyo);
	printf("Introduzca el CVC de caducidad de la tarjeta:\n");
	fflush(stdout);
	scanf("%i", &p1.cvc);
	printf("Procesando pago...\n");
	printf("Pago realizado correctamente\n");
	printf("Pulse 1 para volver al menu principal\n");
	fflush(stdout);
	scanf("%i", &opcion);
	if(!(opcion == 1)){
		while (!(opcion == 1))
				{
			printf("No ha pulsado ninguna opción correcta\n");
			fflush(stdout);
			scanf("%i", &opcion);
				}
	}
	if (opcion == 1) {
		iniciar_programa();
	}

}

