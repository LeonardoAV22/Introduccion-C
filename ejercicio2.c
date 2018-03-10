/*
Realice un programa que calcule la distancia recorrida por un automóvil a una velocidad constante durante un tiempo determinado.
*/

#include <stdio.h>

main(){
	float a, b, c;
	//clrscr();
	printf("Para calcular el recorrido del movil, por favor introduzca los siguientes datos\n");
	printf("Velocidad (Km/hr): \n");
	scanf("%f", &a);
	a = a * .277;
	printf("Tiempo (seg): \n");
	scanf("%f", &b);
	c = a * b;

	printf("El resultado es: %.2f metros\n", c);
	//getch();

	return 0;
}
