/*
 ============================================================================
 Name        : TP1.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca_TP1.h"
#include "Operaciones_TP1.h"




int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	float primerOperando;
	float segundoOperando;
	int flag;
	int flagNum1;
	int flagNum2;
	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int resultadoFactorialUno;
	int resultadoFactorialDos;

do{

	opcion=menu();

		switch(opcion){

			case 1:
				primerOperando = ingresarOperando();
				flagNum1=0;
				break;

			case 2:
				segundoOperando = ingresarOperando();
				flagNum2=0;
				break;

			case 3:
				if(flagNum1 ==0 && flagNum2 ==0){
				resultadoSuma = calcularSuma(primerOperando, segundoOperando);
				resultadoResta = calcularResta(primerOperando,segundoOperando);
				resultadoDivision = calcularDivision(primerOperando, segundoOperando, &flag);
				resultadoMultiplicacion = calcularMultiplicacion(primerOperando, segundoOperando);
				resultadoFactorialUno = calcularFactorial(primerOperando);
				resultadoFactorialDos = calcularFactorial(segundoOperando);
				printf("\nResultados obtenidos\n");
				}
				else{
					printf("No ingresó alguno de los operandos de la opcion 1 y 2. Intentelo de nuevo.\n");
				}
				break;

			case 4:
				if(flagNum1 ==0 && flagNum2 ==0){
				mostrarResultados(resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorialUno, resultadoFactorialDos, &flag, primerOperando, segundoOperando);
				}
				else{
					printf("No ingresó alguno de los operandos de la opcion 1 y 2. Intentelo de nuevo.\n");
				}
				break;
			}
}while(opcion!=5);

	return EXIT_SUCCESS;
}

