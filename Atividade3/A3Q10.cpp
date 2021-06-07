#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int totalNumeros = 1;
	
	while (true) { //pegar entrada
		printf("Insira o número %i (inteiro positivo, se o número for negativo o sistema dará saída ao programa): ", totalNumeros);
		scanf("%i", &numero);
		system("cls");
		
		if (numero > 0 || totalNumeros >= 100) { //caso esse seja o caso
			break; //parar de pegar entrada
		} else {
			totalNumeros ++;
		}
	}
	
	printf("O total de números inseridos foi de %i", totalNumeros); //dar saída
}
