/*
 * estadio.c
 *
 *  Created on: 20 mar. 2020
 *      Author: Victor
 */
#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "menup.h"
#include <unistd.h>

void menu_estadios(){

	Estadio bernabeu = {"Estadio Santiago Bernabéu", "Real Madrid", "Madrid", 1890, 81044};
	Estadio campNou = {"Estadio Camp Nou", "F.C. Barcelona", "Barcelona", 1, 99354};
	Estadio wanda = {"Estadio Wanda Metropolitano", "Atlético de Madrid", "Madrid", 1, 68456};
	Estadio benitoVillamarin = {"Estadio Benito Villamarín", "Real Betis Balompié", "Sevilla", 1, 59378};
	Estadio sanMames = {"Estadio San Mamés", "Athletic de Bilbao", "Bilbao",1 , 53289};
	Estadio mestalla = {"Estadio Mestalla", "Valencia CF", "Valencia", 1, 48600};
	Estadio pizjuan = {"Estadio Ramón Sánchez Pizjuan", "Sevilla FC", "Sevilla",1 , 43883};
	Estadio rcdeEstadium = {"Estadio RCDE Stadium", "RCD Espanyol", "Cornellà de Llobregat (Barcelona)",1 , 40500};
	Estadio realeArena = {"Estadio Reale Arena", "Real Sociedad", "San Sebastián", 1, 39500};
	Estadio balaidos = {"Estadio de Balaídos", "RC Celta de Vigo", "Vigo", 1, 29000};
	Estadio joseZorrilla = {"Estadio Nuevo José Zorrilla", "Real Valladolid CF", "Valladolid",1 , 27618};
	Estadio ciutatValencia = {"Estadio Ciutat de València", "Levante UD", "València", 1, 25354};
	Estadio ceramica = {"Estadio La Cerámica", "Villarreal CF", "Villarreal",1 , 23500};
	Estadio sonMoix = {"Estadio Son Moix", "RCD Mallorca", "Palma de Mallorca",1 , 20500};
	Estadio mendizorroza = {"Estadio Mendizorroza", "Deportivo Alavés", "Vitoria-Gasteiz", 1, 19840};
	Estadio losCarmenes = {"Estadio Nuevo Los Cármenes", "Granada CF", "Granada", 1, 19336};
	Estadio sadar = {"Estadio El Sadar", "CA Osasuna", "Pamplona",1 , 18761};
	Estadio coliseum = {"Estadio Coliseum Alfonso Pérez", "Getafe CF", "Getafe",1 , 16800};
	Estadio ipurua = {"Estadio Ipurua", "SD Eibar", "Eibar",1 , 8164};
	Estadio butarque = {"Estadio Municipal de Butarque", "CD Leganés", "Leganés",1 , 12454};

	Estadio estadios[20] = {bernabeu,campNou,wanda,benitoVillamarin,sanMames,mestalla,pizjuan,rcdeEstadium,realeArena,balaidos,joseZorrilla,ciutatValencia,
			ceramica,sonMoix,mendizorroza,losCarmenes,sadar,coliseum,ipurua,butarque};

	int opcion;
	printf("--------------------------\n ");
	printf("¡Seleccione una estadio para ver sus detalles! \n");
	int i;
	int e = 1;
	for (i = 0; i < 20; ++i)
	{
		printf("%d. %s (%s) \n", e, estadios[i].nombre, estadios[i].equipo);
		e = e +1;
	}

	printf("21. Atras\n");

	fflush(stdout);
	scanf("%i", &opcion);
	if(opcion == 21 ){
		printf("Has seleccionado la opción %i \n ", opcion);
	} else{
		printf("Has seleccionado la opción %i: %s \n ", opcion, estadios[opcion -1].nombre);
	}

	printf("---------------------------\n");
	if(opcion == 21){
		iniciar_menu();
	} else{
		printf("Nombre: %s \n", estadios[opcion -1].nombre);
		printf("Equipo: %s \n", estadios[opcion -1].equipo);
		printf("Ciudad: %s \n", estadios[opcion -1].ciudad);
		printf("Año creación: %i \n", estadios[opcion -1].anyoCreacion);
		printf("Aforo: %i \n", estadios[opcion -1].aforo);
		printf("Pulse 1 para volver atrás\n");
		int pulsar;
		fflush(stdout);
		scanf("%i", &pulsar);
		if(pulsar == 1){
			menu_estadios();
		}
		else{
			while (!(pulsar == 1))
			{
				printf("No ha pulsado el botón 1\n");
				printf("Pulse 1 para volver atrás\n");
				fflush(stdout);
				scanf("%i", &pulsar);
				if(pulsar == 1){
					menu_estadios();
				}
			}
		}
	}
}



