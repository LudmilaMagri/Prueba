/*
 ============================================================================
 Name        : proyecto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//pedir N numeros, imprimir el promedio. define N =10
#include <stdio.h>
#include <stdlib.h>
#define NUM 10

int main(void)
{
	setbuf(stdout,NULL);
	int i;
	int numero;
	int acumulador=0;
	float promedio;

	for (i=0; i<NUM; i++)
	{
		printf("Ingrese un numero");
		scanf("%d", &numero);

		acumulador=acumulador+numero;
	}

	promedio=((float)acumulador)/i;

	printf("El promedio es: %.2f", promedio); //%.2f es para poner dos decimales
	return 0;
}


