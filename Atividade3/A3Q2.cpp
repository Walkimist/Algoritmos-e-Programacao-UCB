#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")

int main() {
	int fator[2]; //Vetor para fator multiplicando de multiplicador
	int resultado = 0;
	
	printf("Insira o fator 1: ");
	scanf("%i", &fator[0]); //Entrada 1
	system("cls");
	
	printf("Insira o fator 2: ");
	scanf("%i", & fator[1]); //Entrada 2
	system("cls");
	
	for (int i = fator[1]; i >= 1; i--) { //Calcular a operação de multiplicação
		resultado += fator[0];
	}
	
	printf("%i * %i = %i", fator[0], fator[1], resultado); //Saída
}
