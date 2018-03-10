/*
1. Escriba un programa que convierta de metros a pies y pulgadas.
*/

#include <stdio.h>

main(){
	float a, b, c;
	//clrscr();
	printf("Cuantos metros quieres convertir??\n");
	scanf("%f", &a);
	b = a * 3.28;
	c = a * 39.37;

	printf("El resultado es: %.2f pies y %.2f pulgadas", b, c);
	//getch();

	return 0;
}
