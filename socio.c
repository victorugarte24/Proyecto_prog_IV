/*
 * socio.c
 *
 *  Created on: 24 mar. 2020
 *      Author: mikel
 */

#include "socio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializarSocios(){

	Socio socio1 = {0, "Mikel", "Castro", "79589273C", 64893837, "11/04/1999", "Mikel123", "Athletic de Bilbao"};
	Socio socio2 = {1,  "Diego", "Presa", "68892743M", 64837467, "21/10/1999", "Diego123", "F.C. Barcelona"};
	Socio socio3 = {2, "Victor", "Ugarte", "62092743D",64345667, "10/11/1999", "Victor123", "F.C. Barcelona"};
	Socio socio4 = {3, "Iñigo", "Marcos", "45679273C", 64893837, "11/04/1999", "Mikel123", "Athletic de Bilbao"};

	socios[0] = socio1;
	socios[1] = socio2;
	socios[2] = socio3;
	socios[3] = socio4;
}


void nuevoSocio(int numerosSocio){

	char str[20];
	int id;
	char nombre[20];
	char apellido[20];
	char dni[20];
	int telefono;
	char fechaNacimiento[20];
	char contrasenya[20];
	char nombreEquipo[20];

	printf("NOMBRE: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &nombre);


	printf("APELLIDO: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &apellido);

	printf("DNI: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &dni);

	printf("TELEFONO: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%i", &telefono);

	printf("FECHA NACIMIENTO (DD/MM/AAAA): \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &fechaNacimiento);

	printf("CONTRASEÑA: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &contrasenya);

	printf("NOMBRE EQUIPO: \n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &nombreEquipo);

	id = numerosSocio;
	Socio s;
	s.idSocio = id;
	strcpy(s.nombre, nombre);
	strcpy(s.apellido, apellido);
	strcpy(s.dni, dni);
	s.telefono=telefono;
	strcpy(s.dni, dni);
	strcpy(s.fechaNacimiento, fechaNacimiento);
	strcpy(s.contrasenya, contrasenya);
	strcpy(s.equipo, nombreEquipo);

	socios[numerosSocio]=s;
}

void iniciarSesion(int numerosSocio){
	char str[20];
	char dni[20];
	char contrasenya[20];
	int localizador;

	printf("DNI:\n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &dni);

	printf("CONTRASEÑA:\n");
	fflush(stdout);
	fgets(str, 20, stdin);
	sscanf(str, "%s", &contrasenya);

	for(int i =0; i<numerosSocio;i++){
		if(strcmp(socios[i].dni,dni)==0)localizador = i;
	}

	if (strcmp(socios[localizador].dni,dni)==0 && strcmp(socios[localizador].contrasenya,contrasenya)==0) {
		printf("te has conectado");
	} else {
		printf("Contraseña incorrecta");
	}


}

void mostrarTodosDatosSocio(Socio s){
	printf("ID: %i\n", s.idSocio);
	printf("Nombre: %s\n", s.nombre);
	printf("Apellido: %s\n", s.apellido);
	printf("DNI: %s\n", s.dni);
	printf("Telefono: %i\n", s.telefono);
	printf("Fecha nacimiento: %s\n", s.fechaNacimiento);
	printf("Nombre de tu Equipo: %s", s.equipo);
}

void mostrarIdSocio(Socio s){
	printf("ID: %i\n", s.idSocio);
}

void mostrarNombreSocio(Socio s){
	printf("Nombre: %s\n", s.nombre);
}

void mostrarApellidoSocio(Socio s){
	printf("Apellido: %s\n", s.apellido);
}
void mostrarFechaNacimientoSocio(Socio s){
	printf("Fecha nacimiento: %s\n", s.fechaNacimiento);
}

void mostrarDniSocio(Socio s){
	printf("DNI: %s\n", s.dni);
}

void mostrarTelefonoSocio(Socio s){
	printf("Telefono: %i\n", s.telefono);
}

void mostrarEquipoSocio(Socio s){
	printf("Nombre de tu Equipo: %s\n", s.equipo);
}
