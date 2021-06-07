//Entrada: Um número
//Saída: O valor absoluto desse número
//Processamento: Checar se o número é negativo

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar variável
	double num;
	
	//Entrada do usuário
	printf("Insira um numero: ");
	scanf("%lf", &num);
	
	//Checar se o número é menor que 0
	if (num < 0) {
		num *= -1;
	}
	
	printf("\nO valor absoluto do numero inserido e: %.1lf\n", num);//Mostrar ao usuário a informação
	return 0; //Finalizar o programa
}
