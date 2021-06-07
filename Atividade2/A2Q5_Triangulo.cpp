//Entrada: Os 3 lados do tri�ngulo
//Sa�da: Se o tri�ngulo � poss�vel
//Processamento: Checar se o tri�ngulo � poss�vel

#include<stdio.h> //Biblioteca de printf() e scanf()

int main() {
	//Declarar vari�veis
	int l[3]; //Array com os 3 lados
	
	//Entrada do usu�rio
	printf("Insira o tamanho dos 3 lados do triangulo:\n");
	for (int i = 0; i < 3; i ++) {
		scanf("%i", &l[i]); //A cada itera��o do for loop pegar o tamanho de um lado diferente
	}
	
	//Checar se o triangulo � poss�vel
	if (l[0] > l[1] + l[2] || l[1] > l[0] + l[2] || l[2] > l[1] + l[0]) {
		printf("\nFalso"); //Mostrar ao usu�rio a informa��o
	} else {
		printf("\nVerdadeiro"); //Mostrar ao usu�rio a informa��o
	}
	
	return 0; //Finalizar o programa	
}
