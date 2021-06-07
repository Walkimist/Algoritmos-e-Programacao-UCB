//Entrada: Um n�mero
//Sa�da: O valor absoluto desse n�mero
//Processamento: Checar se o n�mero � negativo

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar vari�vel
	double num;
	
	//Entrada do usu�rio
	printf("Insira um numero: ");
	scanf("%lf", &num);
	
	//Checar se o n�mero � menor que 0
	if (num < 0) {
		num *= -1;
	}
	
	printf("\nO valor absoluto do numero inserido e: %.1lf\n", num);//Mostrar ao usu�rio a informa��o
	return 0; //Finalizar o programa
}
