/*
7.Realizar un programa que al introducir "x" y "y" nos diga cual es mayor
*/

#include <stdio.h>

int main(){
	float x, y;
	//clrscr();
	printf("Programa que usa el IF\n");
	printf("\nEscribe un número para x: ");
	scanf("%f", &x);
	printf("\nEscribe un número para y: ");
	scanf("%f", &y);
	if (x == y){
		printf("\nX es igual a Y\n");
	}
	else{
		if(x > y){
			printf("\nX es mayor que Y\n");
		}
		else{
			printf("\nY es mayor que X\n");
		}
	}

	//getch();

	return 0;
}