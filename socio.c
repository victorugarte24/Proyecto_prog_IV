/*
 * socio.c
 *
 *  Created on: 24 mar. 2020
 *      Author: mikel
 */

#include "socio.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

Socio* inicializarSocios(){

	Socio* socios = (Socio*)malloc(sizeof(Socio)*4);
	socios[0].idSocio = 0;
	socios[0].nombre = "Mikel";
	socios[0].apellido = "Castro";
	socios[0].dni = "79589273C";
	socios[0].telefono = 64893837;
	socios[0].fechaNacimiento= "11/04/1999";
	socios[0].contrasenya= "Mikel123";

	socios[1].idSocio = 1;
	socios[1].nombre = "Diego";
	socios[1].apellido = "Presa";
	socios[1].dni = "68892743M";
	socios[1].telefono = 64837467;
	socios[1].fechaNacimiento= "21/10/1999";
	socios[1].contrasenya= "Diego123";

	socios[2].idSocio = 2;
	socios[2].nombre = "Victor";
	socios[2].apellido = "Ugarte";
	socios[2].dni = "62092743D";
	socios[2].telefono = 64345667;
	socios[2].fechaNacimiento= "10/11/1999";
	socios[2].contrasenya= "Victor123";

	socios[3].idSocio = 3;
	socios[3].nombre = "Iñigo";
	socios[3].apellido = "Marcos";
	socios[3].dni = "86092743F";
	socios[3].telefono = 64309877;
	socios[3].fechaNacimiento= "6/12/2000";
	socios[3].contrasenya= "Inigo123";

	return socios;
}


void nuevoSocio(Socio *s, int id){
	char str[10];
	char n[10];
	char a[10];
	char d[10];
	char f[10];
	char c[10];

	s->idSocio = id +1;

	printf("NOMBRE: \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &n);


	printf("APELLIDO: \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &a);

	printf("DNI: \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &d);

	printf("TELEFONO: \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%d", &s->telefono);

	printf("FECHA NACIMIENTO (DD/MM/AAAA): \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &f);

	printf("CONTRASEÑA: \n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &c);

	char* nom = (char*) malloc(sizeof(char) * strlen(n));
	strcpy(nom, n);
	char* ape = (char*) malloc(sizeof(char) * strlen(a));
	strcpy(ape, a);
	char* dni = (char*) malloc(sizeof(char) * strlen(d));
	strcpy(dni, d);
	char* fe = (char*) malloc(sizeof(char) * strlen(f));
	strcpy(fe, f);
	char* con = (char*) malloc(sizeof(char) * strlen(c));
	strcpy(con, c);


	s->nombre = nom;
	s->apellido = ape;
	s->dni = dni;
	s->fechaNacimiento = fe;
	s->contrasenya = con;

}

void iniciarSesion(Socio *s){
	char str[10];
	char nom[128];
	char con[128];

	printf("Nombre Usuario:\n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &nom);

	char *nombre = (char*) malloc(sizeof(char) * strlen(nom));
	strcpy(nombre, nom);

	printf("Contraseña:\n");
	fflush(stdout);
	fgets(str, 10, stdin);
	sscanf(str, "%s", &con);

	char *contrasenya = (char*) malloc(sizeof(char) * strlen(con));
	strcpy(contrasenya, con);

	if (strcmp(s->nombre,nombre)==0 && strcmp(s->contrasenya, contrasenya)==0) {
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
	//printf("Nombre de tu Equipo: %i", s.equipo.nombre);
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
	//printf("Nombre de tu Equipo: %i\n", s.equipo.nombre);
}
