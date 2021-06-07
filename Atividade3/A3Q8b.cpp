#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int quantProduto = 1;
	int opcao; //Vari�vel para escolha do usu�rio
	float precoProduto[100]; //Vetor que armazena at� 100 produtos
	
	do { //Loop de entrada
		do { //Pegar o pre�o de cada produto aceitando somente pre�os maiores que 0
			printf("Informe o pre�o do produto %i: ", quantProduto);
			scanf("%f", &precoProduto[quantProduto-1]);
			system("cls");
		} while (precoProduto[quantProduto-1] <= 0);
		
		do { //Pegar a escolha do usu�rio
			printf("Deseja adicionar mais um produto?\n\n1.Sim\t2.N�o\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao != 1 && opcao != 2);
		
		if (opcao == 1) {
			quantProduto ++;
		}
	} while (opcao != 2);
	
	for (int i = 0; i < quantProduto; i ++) { 
		printf("O novo pre�o do produto %i �: %.2f\n\n", i + 1, precoProduto[i] * 1.1); //Dar sa�da com os pre�os aumentados em 10%
	}
}
