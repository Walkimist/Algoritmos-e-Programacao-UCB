#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	int totalNumeros = 1;
	
	while (true) { //pegar entrada
		printf("Insira o n�mero %i (inteiro positivo, se o n�mero for negativo o sistema dar� sa�da ao programa): ", totalNumeros);
		scanf("%i", &numero);
		system("cls");
		
		if (numero > 0 || totalNumeros >= 100) { //caso esse seja o caso
			break; //parar de pegar entrada
		} else {
			totalNumeros ++;
		}
	}
	
	printf("O total de n�meros inseridos foi de %i", totalNumeros); //dar sa�da
}
