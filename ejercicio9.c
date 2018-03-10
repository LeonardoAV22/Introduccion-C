/*
9. Par o impar
*/

#include <stdio.h>
//#include <conio.h>

int main(){
	int num;
	//clrscr();
	printf("Par o Impar\n");
	printf("\nDame el numero; ");
	scanf("%d", &num);
	if (num%2 == 0)
		printf("\nNumero par");
	else
		printf("\nNumero impar");
	//getch();

	return 0;
}