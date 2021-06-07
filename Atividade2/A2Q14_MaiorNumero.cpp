#include<stdio.h> //Biblioteca de printf e scanf

int main() {
	int valor[3]; //Vetor para armazenar os numeros
	
	printf("Insira 3 Numeros:\n\n");
	scanf("%i", &valor[0]); //Entrada do usuario
	scanf("%i", &valor[1]); //Entrada do usuario
	scanf("%i", &valor[2]); //Entrada do usuario
		
	int maiorNumero = valor[0]; //Variavel para armazenar o maior numero
	for (int i = 1; i < 3; i++) { //Comparar os valores
		if (maiorNumero < valor[i]) {
			maiorNumero = valor[i];
		}
	}
	printf("\nO maior numero e %i", maiorNumero); //Apresentar saida
}
