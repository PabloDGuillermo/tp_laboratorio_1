/*
 * Biblioteca_TP1.c
 *
 *  Created on: 19 sep. 2021
 *      Author: Administrador
 */
#include <stdio.h>
#include <ctype.h>
#include "Biblioteca_TP1.h"

float ingresarOperando (){
	float operando;

	printf("Ingrese un numero entero: ");
	scanf("%f", &operando);

	return operando;
}

void mostrarResultados(int Suma,int Resta,float Division,int Multiplicacion,int FactorialUno,int FactorialDos,int* flag, int primerOperando, int segundoOperando){

	printf("\nEl resultado de la suma es %d\n", Suma);
	printf("El resultado de la resta es %d\n", Resta);
	if(*flag==0){
		printf("El resultado de la division es %.2f\n", Division);
	}
	else{
		printf("No se puede dividir por 0\n");
	}
	printf("El resultado de la multiplicacion es %d\n", Multiplicacion);
	if(primerOperando<=0){
		printf("No se puede obtener el factorial de %d\n", primerOperando);
	}else{
	printf("El resultado del factorial del primer operando es %d\n", FactorialUno);
	}
	if(segundoOperando<=0){
			printf("No se puede obtener el factorial de %d\n", segundoOperando);
		}else{
	printf("El resultado del factorial del segundo operando es %d\n", FactorialDos);
		}


}

int menu(){
	int opcion;

			printf("\n1 - Ingresar primer operando\n"
				   "2 - Ingresar segundo operando\n"
				   "3 - Calcular todas las operaciones\n"
				   "4 - Informar resultados\n"
				   "5 - Salir\n"
				   "Elija una opcion: ");
			scanf("%d", &opcion);
			printf("\n");

			while(opcion<1 || opcion>5){
				printf("ERROR. Elija una opcion valida: ");
				scanf("%d", &opcion);
			}


			return opcion;
}
