#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int quantProduto = 1;
	float precoProduto[100]; //Vetor que armazena at� 100 produtos
	
	do { //Loop de entrada
		printf("Informe o pre�o do produto %i: ", quantProduto);
		scanf("%f", &precoProduto[quantProduto-1]);
		system("cls");
		
		if (precoProduto[quantProduto-1] > 0) { //Checar se o pre�o � maior que 0
			quantProduto ++;
		} 
	} while (precoProduto[quantProduto-1] != -1); //Parar quando a entrada for -1
	quantProduto --;
	
	for (int i = 0; i < quantProduto; i ++) {
		printf("O novo pre�o do produto %i �: %.2f\n\n", i + 1, precoProduto[i] * 1.1); //Dar sa�da com os pre�os aumentados em 10%
	}
}
