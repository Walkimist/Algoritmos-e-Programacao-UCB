//Entrada: velocidade e placa
//Saída: informação se o veíclo será multado
//Processamento: Checar velocidade >80 ou <40

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar variáveis
	int vel;
	char placa[7]; //Declarar string usando um array de caracteres
	
	//Entrada do usuário
	printf("Insira a placa do veiculo: ");
	scanf("%s", &placa);
	printf("\nInsira a velocidade do veiculo: ");
	scanf("%i", &vel);
	
	//Checar a velocidade
	if (vel > 80) {
		printf("\nVerdadeiro");//Mostrar ao usuário a informação
	} else if (vel < 40) {
		printf("\nVerdadeiro");//Mostrar ao usuário a informação
	} else {
		printf("\nFalso");//Mostrar ao usuário a informação
	}
	
	return 0; //Finalizar o programa
}
