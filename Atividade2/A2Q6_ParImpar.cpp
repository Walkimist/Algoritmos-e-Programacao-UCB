//Entrada: Um n�mero
//Sa�da: Se o n�mero � par ou �mpar
//Processamento: Checar se o n�mero � par ou �mpar

#include<stdio.h> //Biblioteca de printf() e scanf()

int main() {
	//Declarar vari�veis
	int num;
	
	//Entrada do usu�rio
	printf("Insira um numero: ");
	scanf("%i",  &num);
	
	//Checar se o n�mero � par ou �mpar
	if (num % 2 == 0) {
		printf("O numero %i e par", num); //Mostrar ao usu�rio a informa��o
	} else {
		printf("O numero %i e impar", num); //Mostrar ao usu�rio a informa��o
	}
	
	return 0; //Finalizar o programa
}
