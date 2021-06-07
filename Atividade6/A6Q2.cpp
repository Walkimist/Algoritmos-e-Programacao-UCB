#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resultado, i = 1;
	
	do { //entrada do número
		printf("Insira um numero para seu cálculo de fatorial: ");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0);
	
	//cálculo fatorial
	resultado = numero; 
	while (i < numero) {
		resultado *= i;
		i ++;
	}
	
	printf("%i! = %i", numero, resultado); //saída
}
