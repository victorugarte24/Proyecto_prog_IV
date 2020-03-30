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
	char *nombre;
	char *apellido;
	char *dni;
	int telefono;
	char *fechaNacimiento;
	char *contrasenya;
	//Equipo equipo;
} Socio;

Socio* inicializarSocios();
void nuevoSocio(Socio *s, int id);
void iniciarSesion(Socio *s);
void mostrarTodosDatosSocio(Socio s);
void mostrarDniSocio(Socio s);
void mostrarTelefonoSocio(Socio s);
void mostrarEquipoSocio(Socio s);
void mostrarNombreSocio(Socio s);
void mostrarIdSocio(Socio s);
void mostrarApellidoSocio(Socio s);
void mostrarFechaNacimientoSocio(Socio s);

#endif /* SOCIO_H_ */
