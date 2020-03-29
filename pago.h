/*
 * pago.h
 *
 *  Created on: 25 mar. 2020
 *      Author: Victor
 */

#ifndef PAGO_H_
#define PAGO_H_

typedef struct{
	int numTarjeta;
	int mes;
	int anyo;
	int cvc;
}Pago;

void realizar_pago();


#endif /* PAGO_H_ */
