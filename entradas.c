/*
 * entradas.c
 *
 *  Created on: 20 mar. 2020
 *      Author: Victor
 */

#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "entradas.h"
#include <unistd.h>
#include <time.h>
#include "menup.h"

void imprimir_ticket(Entradas entrada, int partido){

	FILE * fp;
	fp = fopen ("Ticket.txt","w");
	fprintf (fp, "Previsualización del Pago\n");
	fprintf (fp, "Precio entrada: %i Euros\n", entrada.precioEntrada);
	fprintf (fp, "Número de entradas: %i\n", entrada.numEntradas);
	fprintf (fp, "Precio Total: %i Euros\n", entrada.PrecioTotal);
	fclose (fp);

}

void imprimir_entrada(Entradas entrada, int partido){
	printf("Previsualización de entrada: \n");
	printf("Partido: ");
	imprimir_partido(partido);
	printf("Sector: %s \n", entrada.Sector);
	printf("Fila: %i \n", entrada.numFila);
	printf("Número de entradas: %i \n", entrada.numEntradas);
	printf("Precio Entrada: %i \n", entrada.precioEntrada);
	printf("Precio Total: %i \n", entrada.PrecioTotal);
}

int calcular_precio(int Sector, int numFila){
	int precio;
	if(Sector == 1){
		precio = 20;
	}
	else if(Sector == 2){
		precio = 25;
	}
	else if(Sector == 3){
		precio = 30;
	}
	else if(Sector == 4){
		precio = 35;
	}
	if (numFila > 5){
		precio = precio +5;
	} else{
		precio = precio + 10;
	}
	return precio;
}

void comprar_entradas(){
	int partido;
	int sector;
	int i;
	int e;
	int fila;
	int numEntradas;
	int confirmar;
	int precioEntrada;
	int precioTotal;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	char *arraySectores[4] = {" Fondo Norte", " Fondo Sur", " Lateral Este", " Lateral Oeste"};

	printf("Seleccione un partido:\n");
	imprimir_partidos();
	printf("Pulse 11 si desea cancelar la compra de entradas\n|");
	fflush(stdout);
	scanf("%i", &partido);
	if(partido == 11){
		iniciar_menu();
	}
	printf("Seleccione un sector del estadio:\n");
	for (e = 0; e < 4; e++)
	{
		printf("%i. %s \n", e+1,arraySectores[e]);
	}
	fflush(stdout);
	scanf("%i", &sector);
	printf("Seleccione una fila disponble:\n");
	for (int i = 0; i < 10; i++) {
	    int temp = array[i];
	    int randomIndex = rand() % 10;

	    array[i] = array[randomIndex];
	    array[randomIndex] = temp;
	}
	for (i = 0; i < 4; i++)
	{
		printf("%i. %d \n", i+1,array[i]);
	}
	fflush(stdout);
	scanf("%i", &fila);
	printf("Indique el número de entradas:\n");
	fflush(stdout);
	scanf("%i", &numEntradas);
	printf("--------------------------\n");
	precioEntrada = calcular_precio(sector, fila);
	precioTotal = precioEntrada * numEntradas;
	Entradas entrada = {numEntradas, fila, arraySectores[sector - 1], precioEntrada, precioTotal};
	imprimir_entrada(entrada, partido -1);
	printf("Presione 1 para confirmar o 2 para cancelar\n");
	fflush(stdout);
	scanf("%i", &confirmar);
	if(!(confirmar == 1 || confirmar == 2)){
		while (!(confirmar == 1 || confirmar == 2))
		{
			printf("No ha pulsado ninguna opción correcta\n");
			fflush(stdout);
			scanf("%i", &confirmar);
		}
	}
	if(confirmar == 1){
		imprimir_ticket(entrada, partido -1);
		realizar_pago();
	}else{
		comprar_entradas();
	}
}
