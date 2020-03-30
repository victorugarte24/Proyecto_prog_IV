/*
 * partido.c
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */
#include <stdlib.h>
#include <stdio.h>
#include "partido.h"
#include "equipo.h"
#include "menup.h"

void imprimir_jornada_anterior(){
	cargar_equipos();
	cargar_partidos();
	int opcion;
	Partido p1 = {equipos[iDleganes], equipos[iDatleticoMadrid], "20:30", equipos[iDleganes].estadio};
	Partido p2 = {equipos[iDbarcelona], equipos[iDathleticClub], "18:30", equipos[iDbarcelona].estadio};
	Partido p3 = {equipos[iDbetis], equipos[iDsevilla], "21:00", equipos[iDbetis].estadio};
	Partido p4 = {equipos[iDvalencia], equipos[iDespanyol], "12:00", equipos[iDsevilla].estadio};
	Partido p5 = {equipos[iDrealSociedad], equipos[iDcelta], "16:30", equipos[iDrealSociedad].estadio};
	Partido p6 = {equipos[iDmallorca], equipos[iDlevante], "19:00", equipos[iDmallorca].estadio};
	Partido p7 = {equipos[iDvillarreal], equipos[iDvalladolid], "13:30", equipos[iDvillarreal].estadio};
	Partido p8 = {equipos[iDgetafe], equipos[iDgranada], "18:00", equipos[iDgetafe].estadio};
	Partido p9 = {equipos[iDosasuna], equipos[iDalaves], "14:00", equipos[iDosasuna].estadio};
	Partido p10 = {equipos[iDeibar], equipos[iDrealMadrid], "20:00", equipos[iDeibar].estadio};

	partidos_jornada_anterior[0] = p1;
	partidos_jornada_anterior[1] = p2;
	partidos_jornada_anterior[2] = p3;
	partidos_jornada_anterior[3] = p4;
	partidos_jornada_anterior[4] = p5;
	partidos_jornada_anterior[5] = p6;
	partidos_jornada_anterior[6] = p7;
	partidos_jornada_anterior[7] = p8;
	partidos_jornada_anterior[8] = p9;
	partidos_jornada_anterior[9] = p10;
	int e = 1;
	int i;
	for (i = 0; i < 10; ++i)
	{
		int g1 = rand()%10;
		int g2 = rand()%10;
		printf("%d. %s - %s %i - %i\n", e, partidos[i].eqLocal.nombre, partidos[i].eqVisitante.nombre, g1, g2);
		e = e +1;
	}
	printf("Pulse 11 para volver atrás\n");
	fflush(stdout);
	scanf("%i", &opcion);
	if(opcion == 11){
		iniciar_menu();
	}else{
		while (!(opcion == 11))
		{
			printf("No ha pulsado el botón 11\n");
			printf("Pulse 11 para volver atrás\n");
			fflush(stdout);
			scanf("%i", &opcion);
			if(opcion == 11){
				iniciar_menu();
			}
		}
	}


}

Partido devolver_partido(int partido){
	return partidos[partido];
}

void imprimir_partido(int i){
	printf(" %s - %s \n", partidos[i].eqLocal.nombre, partidos[i].eqVisitante.nombre);

}

void imprimir_partidos(){
	cargar_equipos();
	cargar_partidos();
	int e = 1;
	int i;
	for (i = 0; i < 10; ++i)
	{
		printf("%d. %s - %s \n", e, partidos[i].eqLocal.nombre, partidos[i].eqVisitante.nombre);
		e = e +1;
	}
}

void cargar_partidos(){

	Partido p1 = {equipos[iDrealMadrid], equipos[iDbarcelona], "20:30", equipos[iDrealMadrid].estadio};
	Partido p2 = {equipos[iDatleticoMadrid], equipos[iDbetis], "18:30", equipos[iDatleticoMadrid].estadio};
	Partido p3 = {equipos[iDathleticClub], equipos[iDvalencia], "21:00", equipos[iDathleticClub].estadio};
	Partido p4 = {equipos[iDsevilla], equipos[iDespanyol], "12:00", equipos[iDsevilla].estadio};
	Partido p5 = {equipos[iDrealSociedad], equipos[iDcelta], "16:30", equipos[iDrealSociedad].estadio};
	Partido p6 = {equipos[iDvalladolid], equipos[iDlevante], "19:00", equipos[iDvalladolid].estadio};
	Partido p7 = {equipos[iDvillarreal], equipos[iDmallorca], "13:30", equipos[iDvillarreal].estadio};
	Partido p8 = {equipos[iDalaves], equipos[iDgranada], "18:00", equipos[iDalaves].estadio};
	Partido p9 = {equipos[iDosasuna], equipos[iDgetafe], "14:00", equipos[iDosasuna].estadio};
	Partido p10 = {equipos[iDeibar], equipos[iDleganes], "20:00", equipos[iDeibar].estadio};

	partidos[0] = p1;
	partidos[1] = p2;
	partidos[2] = p3;
	partidos[3] = p4;
	partidos[4] = p5;
	partidos[5] = p6;
	partidos[6] = p7;
	partidos[7] = p8;
	partidos[8] = p9;
	partidos[9] = p10;
}

void menu_partidos(){
	cargar_equipos();
	cargar_partidos();
	int opcion;
	printf("-------------------------\n ");
	printf("¡Seleccione un partido para ver sus detalles! \n");
	imprimir_partidos();
	printf("11. Atras\n");

	fflush(stdout);
	scanf("%i", &opcion);
	if(opcion == 11){
		printf("Has seleccionado la opción %i \n ", opcion);
	} else{
		printf("Has seleccionado la opción %i: %s - %s \n", opcion, partidos[opcion-1].eqLocal.nombre, partidos[opcion-1].eqVisitante.nombre);
	}
	if(opcion == 11){
		iniciar_menu();
	}else{
		printf("Equipo Local: %s \n", partidos[opcion -1].eqLocal.nombre);
		printf("Equipo Visitante: %s \n", partidos[opcion -1].eqVisitante.nombre);
		printf("Hora: %s \n", partidos[opcion -1].hora);
		printf("Estadio: %s \n", partidos[opcion -1].eqLocal.estadio);
		printf("Pulse 1 para volver atrás\n");
		int pulsar;
		fflush(stdout);
		scanf("%i", &pulsar);
		if(pulsar == 1){
			menu_partidos();
		}
		else{
			while (!(pulsar == 1))
			{
				printf("No ha pulsado el botón 1\n");
				printf("Pulse 1 para volver atrás\n");
				fflush(stdout);
				scanf("%i", &pulsar);
				if(pulsar == 1){
					menu_partidos();
				}
			}
		}

	}

}


