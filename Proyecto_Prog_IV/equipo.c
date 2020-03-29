/*æ
 * equipo.c
 *
 *  Created on: 24 mar. 2020
 *      Author: Diego
 */

#include "equipo.h"
#include <stdio.h>
#include <string.h>
#define MAX_LINE 10

void menu_equipos(){

	Equipo realMadrid = {"Real Madrid", "Madrid", "Madrid", 1902, "Santiago Bernabéu"};
	Equipo barcelona = {"F.C. Barcelona", "Barcelona", "Barcelona", 1899, "Camp Nou"};
	Equipo atleticoMadrid = {"Atlético de Madrid", "Madrid", "Madrid", 1903,"Wanda Metropolitano"};
	Equipo betis = {"Real Betis Balompié", "Sevilla", "Sevilla", 1907, "Benito Villamarín"};
	Equipo athleticClub = {"Athletic de Bilbao", "Bilbao", "Vizcaya", 1898, "San Mamés"};
	Equipo valencia = {"Valencia CF", "Valencia", "Valencia", 1919, "Mestalla"};
	Equipo sevilla = {"Sevilla FC", "Sevilla", "Sevilla", 1890, "Ramón Sánchez Pizjuan"};
	Equipo espanyol = {"RCD Espanyol", "Barcelona", "Barcelona", 1900,"RCDE Stadium"};
	Equipo realSociedad = {"Real Sociedad", "San Sebastián", "Guipuzcoa", 1909, "Reale Arena"};
	Equipo celta = {"Celta de Vigo", "Vigo", "Pontevedra", 1923, "Balaídos"};
	Equipo valladolid = {"Real Valladolid CF", "Valladolid", "Valladolid", 1928, "Nuevo José Zorrilla"};
	Equipo levante = {"Levante UD", "Valencia", "Valencia", 1909, "Ciutat de Valencia"};
	Equipo villarreal = {"Villarreal CF", "Villarreal", "Castellon", 1923, "La Cerámica"};
	Equipo mallorca = {"RCD Mallorca", "Palma de Mallorca", "Islas Baleares", 1916, "Son Moix"};
	Equipo alaves = {"Deportivo Alavés", "Vitoria-Gasteiz", "Alava", 1921, "Mendizorroza"};
	Equipo granada = {"Granada CF", "Granada", "Granada", 1931, "Nuevo Los Cármenes"};
	Equipo osasuna = {"CA Osasuna", "Pamplona", "Navarra", 1920, "El Sadar"};
	Equipo getafe = {"Getafe CF", "Getafe", "Madrid", 1983,"Coliseum Alfonso Pérez"};
	Equipo eibar = {"SD Eibar", "Eibar", "Guipuzcoa", 1940, "Ipurua"};
	Equipo leganes = {"CD Leganés", "Leganés", "Madrid", 1928, "Butarque"};

	Equipo equipos[20] = {realMadrid,barcelona,atleticoMadrid,betis,athleticClub,valencia,sevilla,espanyol,realSociedad,celta,valladolid,levante,
	villarreal,mallorca,alaves,granada,osasuna,getafe,eibar,leganes};

	int opcion;
	printf("--------------------------\n ");
	printf("¡Seleccione un equipo para ver sus detalles! \n");
	int i;
	int e = 1;
	for (i = 0; i < 20; ++i)
	{
		printf("%d. %s (%s) \n", e, equipos[i].nombre, equipos[i].ciudad);
		e = e +1;
	}

	printf("21. Atras\n");

	fflush(stdout);
	scanf("%i", &opcion);
	if(opcion == 21 ){
		printf("Has seleccionado la opción %i \n ", opcion);
	} else{
		printf("Has seleccionado la opción %i: %s \n ", opcion, equipos[opcion -1].nombre);
	}

	printf("---------------------------\n");
	if(opcion == 21){
		iniciar_menu();
	} else{
		printf("Nombre: %s \n", equipos[opcion -1].nombre);
		printf("Ciudad: %s \n", equipos[opcion -1].ciudad);
		printf("Provincia: %s \n", equipos[opcion -1].provincia);
		printf("Año fundacion: %i \n", equipos[opcion -1].anyoFundacion);
		printf("Estadio: %s \n", equipos[opcion -1].estadio);
		printf("Pulse 1 para volver atrás\n");
		int pulsar;
		fflush(stdout);
		scanf("%i", &pulsar);
		if(pulsar == 1){
			menu_equipos();
		}
		else{
			while (!(pulsar == 1))
			{
				printf("No ha pulsado el botón 1\n");
				printf("Pulse 1 para volver atrás\n");
				fflush(stdout);
				scanf("%i", &pulsar);
				if(pulsar == 1){
					menu_equipos();
				}
			}
		}

	}

	void mostrarDatosEquipo(){

	}
}

