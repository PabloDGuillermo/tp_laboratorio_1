/*
 * Operanciones_TP1.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Administrador
 */
#include <stdio.h>
#include <ctype.h>
#include "Operaciones_TP1.h"

int calcularSuma(int primerOperando, int segundoOperando){
	int resultado;

	resultado = primerOperando + segundoOperando;

	return resultado;
}

int calcularResta(int primerOperando, int segundoOperando){
	int resultado;

	resultado = primerOperando - segundoOperando;

	return resultado;
}

float calcularDivision(float primerOperando, float segundoOperando, int *flag){
	float resultado=0;

	if(segundoOperando==0){
		*flag=1;
	}
	else{
	resultado = primerOperando / segundoOperando;
	*flag=0;
	}

	return resultado;
}

int calcularMultiplicacion(int primerOperando, int segundoOperando){
	int resultado;

	resultado = primerOperando * segundoOperando;

	return resultado;
}

int calcularFactorial(int operando){
	int resultado = 1;
	int i;

	for(i = operando; i > 1; i--){
		resultado = resultado * i;
	}

	return resultado;
}

