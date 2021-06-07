//Entrada: Um número
//Saída: Se o número é par ou ímpar
//Processamento: Checar se o número é par ou ímpar

#include<stdio.h> //Biblioteca de printf() e scanf()

int main() {
	//Declarar variáveis
	int num;
	
	//Entrada do usuário
	printf("Insira um numero: ");
	scanf("%i",  &num);
	
	//Checar se o número é par ou ímpar
	if (num % 2 == 0) {
		printf("O numero %i e par", num); //Mostrar ao usuário a informação
	} else {
		printf("O numero %i e impar", num); //Mostrar ao usuário a informação
	}
	
	return 0; //Finalizar o programa
}
