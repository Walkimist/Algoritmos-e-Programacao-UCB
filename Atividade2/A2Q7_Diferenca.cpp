//Entrada: Dois números
//Saída: Subtração do maior pelo menor
//Processamento: Subtrair o maior número pelo menor

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar variáveis
	int num[2];
	
	//Entrada do usuário
	printf("Insira dois numeros:\n");
	for (int i = 0; i < 2; i++) {
		scanf("%i", &num[i]); //Para cada iteração do for loop registrar outro número
	}
	
	//Fazer a subtração do maior número pelo menor
	if (num[0] >= num[1]){
		printf("\n%i - %i = %i", num[0], num[1], num[0] - num[1]); //Mostrar ao usuário a informação
	} else {
		printf("\n%i - %i = %i", num[1], num[0], num[1] - num[0]); //Mostrar ao usuário a informação
	}
	
	return 0; //Finalizar o programa
}
