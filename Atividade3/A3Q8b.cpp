#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int quantProduto = 1;
	int opcao; //Variável para escolha do usuário
	float precoProduto[100]; //Vetor que armazena até 100 produtos
	
	do { //Loop de entrada
		do { //Pegar o preço de cada produto aceitando somente preços maiores que 0
			printf("Informe o preço do produto %i: ", quantProduto);
			scanf("%f", &precoProduto[quantProduto-1]);
			system("cls");
		} while (precoProduto[quantProduto-1] <= 0);
		
		do { //Pegar a escolha do usuário
			printf("Deseja adicionar mais um produto?\n\n1.Sim\t2.Não\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao != 1 && opcao != 2);
		
		if (opcao == 1) {
			quantProduto ++;
		}
	} while (opcao != 2);
	
	for (int i = 0; i < quantProduto; i ++) { 
		printf("O novo preço do produto %i é: %.2f\n\n", i + 1, precoProduto[i] * 1.1); //Dar saída com os preços aumentados em 10%
	}
}
