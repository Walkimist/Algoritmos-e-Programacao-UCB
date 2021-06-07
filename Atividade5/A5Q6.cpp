#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	do { //pegar entrada
		printf("====================== Menu de Opções =======================");
		printf("\n\nEscolha qual das seguintes regiões você gostaria de conhecer\n\n");
		printf("=============================================================\n\n");
		
		printf("1 - Norte              2 - Nordeste           3 - Centro-Oeste\n\n");
		printf("4 - Sudeste            5 - Sul                0 - Sair\n\n");
		printf("=============================================================\n\n");
		scanf("%i", &opcao);
		system("cls");
	} while (opcao < 0 || opcao > 5);

	switch(opcao) { //saída
		case 1:
			printf("Norte");
		break;
		case 2:
			printf("Nordeste");
		break;
		case 3:
			printf("Centro-Oeste");
		break;
		case 4:
			printf("Sudeste");
		break;
		case 5:
			printf("Sul");
		break;
	}
}
