//Entrada: Dois n�meros
//Sa�da: Subtra��o do maior pelo menor
//Processamento: Subtrair o maior n�mero pelo menor

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar vari�veis
	int num[2];
	
	//Entrada do usu�rio
	printf("Insira dois numeros:\n");
	for (int i = 0; i < 2; i++) {
		scanf("%i", &num[i]); //Para cada itera��o do for loop registrar outro n�mero
	}
	
	//Fazer a subtra��o do maior n�mero pelo menor
	if (num[0] >= num[1]){
		printf("\n%i - %i = %i", num[0], num[1], num[0] - num[1]); //Mostrar ao usu�rio a informa��o
	} else {
		printf("\n%i - %i = %i", num[1], num[0], num[1] - num[0]); //Mostrar ao usu�rio a informa��o
	}
	
	return 0; //Finalizar o programa
}
