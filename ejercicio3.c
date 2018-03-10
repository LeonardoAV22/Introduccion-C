/*
Suponga que una persona desea invertir su capital en un banco y quiere conocer cuanto ganará después de un mes. El banco paga a razón de 2% mensual.
*/

#include <stdio.h>

main(){
	float a, b, c;
	//clrscr();
	printf("Para calcular su ganancia, por favor ingrese el monto (MXN): ");
	scanf("%f", &a);
	b = a *.02;
	c = a + b;
	printf("\nSu saldo al cabo de un mes seria: %.2f (MXN), c");
	//getch();

	return 0;
}