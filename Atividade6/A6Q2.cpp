#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resultado, i = 1;
	
	do { //entrada do n�mero
		printf("Insira um numero para seu c�lculo de fatorial: ");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0);
	
	//c�lculo fatorial
	resultado = numero; 
	while (i < numero) {
		resultado *= i;
		i ++;
	}
	
	printf("%i! = %i", numero, resultado); //sa�da
}
