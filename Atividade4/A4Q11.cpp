#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float media = 0, quantNumero = 0;
	
	do {
		do { //pegar entrada
			printf("Qual o número par %.0f: ", quantNumero + 1);
			scanf("%i", &numero);
			system("cls");
			if (numero % 2 != 0) {
				printf("O número deve ser par.\n\n");
			}
		} while (numero % 2 != 0 && numero != 0);
		
		if (numero != 0) { //aumento na média
			media += numero;
			quantNumero ++;
		}
	} while (numero != 0);
	
	media /= quantNumero; //cálculo da média
	
	printf("A média dos números inseridos é %.2f", media); //saída
}
