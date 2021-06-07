#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int quantProduto;
	int i;
	
	do { //Pegar a quantidade de produtos (deve ser maior que 0)
		printf("Informe a quantidade de produtos que possui: ");
		scanf("%i", &quantProduto);
		system("cls");
	} while (quantProduto <= 0);
	
	float precoProduto[quantProduto];
	
	for (i = 0; i < quantProduto; i ++) { //Pegar o preço de cada produto (deve ser maior que 0)
		do { 
			printf("Informe o custo do produto %i: ", i + 1);
			scanf("%f", &precoProduto[i]);
			system("cls");
		} while (precoProduto[i] <= 0);
	}
	
	for (i = 0; i < quantProduto; i ++) {
		printf("O novo preço do produto %i é: %.2f\n\n", i + 1, precoProduto[i] * 1.1); //Dar saída com os preços aumentados em 10%
	}
}
