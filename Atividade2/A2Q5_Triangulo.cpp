//Entrada: Os 3 lados do triângulo
//Saída: Se o triângulo é possível
//Processamento: Checar se o triângulo é possível

#include<stdio.h> //Biblioteca de printf() e scanf()

int main() {
	//Declarar variáveis
	int l[3]; //Array com os 3 lados
	
	//Entrada do usuário
	printf("Insira o tamanho dos 3 lados do triangulo:\n");
	for (int i = 0; i < 3; i ++) {
		scanf("%i", &l[i]); //A cada iteração do for loop pegar o tamanho de um lado diferente
	}
	
	//Checar se o triangulo é possível
	if (l[0] > l[1] + l[2] || l[1] > l[0] + l[2] || l[2] > l[1] + l[0]) {
		printf("\nFalso"); //Mostrar ao usuário a informação
	} else {
		printf("\nVerdadeiro"); //Mostrar ao usuário a informação
	}
	
	return 0; //Finalizar o programa	
}
