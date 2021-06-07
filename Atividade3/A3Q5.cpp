#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int resultado;
	
	do { 
		printf("Insira um numero positivo para o calculo de seu fatorial: ");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0); //Apenas pega entradas positivas
	
	if (numero == 0) { //0! = 1
		printf("0! � igual a 1"); //Sa�da
	} else {
		resultado = numero;
		int i = numero;
		do {
			resultado *= i-1;
			i --;
		} while (i >= 2);
		printf("%i! � igual a %i", numero, resultado); //Sa�da
	}
}
