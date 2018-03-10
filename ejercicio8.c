/*
8. Lee tres números y los muestra ordenados
*/

#include <stdio.h>
//#include <conio.h>

int main(){
	float a, b, c;
	//clrscr();
	printf("Imprimir ordenados los numeros\n");
	printf("\nDame los numeros 1, 2 y 3: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("\n");
	if ((a > b) && (a > c))
		if (b > c)
			printf("\n%.1f \n%.1f \n%.1f\n", a, b, c);
		else
			printf("\n%.1f \n%.1f \n%.1f\n", a, c, b);
	if ((b > a) && (b > c))
		if (a > c)
			printf("\n%.1f \n%.1f \n%.1f\n", b, a, c);
		else
			printf("\n%.1f \n%.1f \n%.1f\n", b, c, a);
	if ((c > a) && (c > b))
		if (a > b)
			printf("\n%.1f \n%.1f \n%.1f\n", c, a, b);
		else
			printf("\n%.1f \n%.1f \n%.1f\n", c, b, a);

	//getch();

	return 0;
}