#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese"); //Comando para poder utilizar characteres da l?ngua portuguesa
	
	int numero;
	int resultado;
	
	do { 
		printf("Insira um numero positivo para o calculo de seu fatorial: ");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0); //Apenas pega entradas positivas
	
	if (numero == 0) { //0! = 1
		printf("0! ? igual a 1"); //Sa?da
	} else {
		resultado = numero;
		for (int i = numero; i >= 2 ; i--) { //Calculo do fatorial
			resultado *= i-1;
		}
		printf("%i! ? igual a %i\n", numero, resultado); //Sa?da
	}
}
