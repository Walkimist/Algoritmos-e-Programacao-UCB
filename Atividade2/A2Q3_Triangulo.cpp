//Entrada: Os 3 lados do triângulo
//Saída: Se o triângulo é possível
//Processamento: Checar se o triângulo é possível

#include<stdio.h> //Biblioteca de printf() e scanf()

int main() {
	//Declarar variáveis
	int l[3]; //Array com os 3 lados
	
	//Entrada do usuário
	for (int i = 0; i < 3; i ++) {
		printf("Insira o tamanho do lado %i: ", i+1);
		scanf("%i", &l[i]); //A cada iteração o for loop irá pegar o tamanho de um lado diferente
	}
	
	//Checar se o triangulo é possível
	if (l[0] > l[1] + l[2] || l[1] > l[0] + l[2] || l[2] > l[1] + l[0]) {
		printf("\nO triangulo com lados %i, %i e %i nao e possivel", l[0], l[1], l[2]); //Mostrar ao usuário a informação
	} else {
		printf("\nO triangulo com lados %i, %i e %i e possivel", l[0], l[1], l[2]); //Mostrar ao usuário a informação
	}
	
	return 0; //Finalizar o programa	
}
