#include<stdio.h>

int main() {
	float altura[3];
	printf("Insira a altura de 3 pessoas\n\n");
	
	scanf("%f", &altura[0]); //Entrada do usuario
	scanf("%f", &altura[1]); //Entrada do usuario
	scanf("%f", &altura[2]); //Entrada do usuario
	
	float menorAltura = altura[0]; //Variavel para armazenar o menor numero
	for (int i = 1; i < 3; i++) { //Comparar os valores
		if (menorAltura > altura[i]) {
			menorAltura = altura[i];
		}
	}
	printf("\nA menor altura e %.2f", menorAltura); //Apresentar saida
}
