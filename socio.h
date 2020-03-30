/*
 * socio.h
 *
 *  Created on: 24 mar. 2020
 *      Author: mikel
 */

#ifndef SOCIO_H_
#define SOCIO_H_

typedef struct {
	int idSocio;
	char nombre[20];
	char apellido[20];
	char dni[20];
	int telefono;
	char fechaNacimiento[20];
	char contrasenya[20];
	char equipo[20];
} Socio;

Socio socios[20];
void inicializarSocios();
void nuevoSocio(int numerosSocio);
void iniciarSesion(int numerosSocio);
void mostrarTodosDatosSocio(Socio s);
void mostrarDniSocio(Socio s);
void mostrarTelefonoSocio(Socio s);
void mostrarEquipoSocio(Socio s);
void mostrarNombreSocio(Socio s);
void mostrarIdSocio(Socio s);
void mostrarApellidoSocio(Socio s);
void mostrarFechaNacimientoSocio(Socio s);

#endif /* SOCIO_H_ */
