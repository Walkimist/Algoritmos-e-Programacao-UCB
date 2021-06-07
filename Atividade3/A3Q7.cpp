#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int opcao; //Opção escolhida pelo usuário
	int quantMaca = 0;
	int quantPera = 0;
	int quantAbacaxi = 0;
	
	do { //Pegar entrada até o usuário decidir parar
		do { //Pegar entrada válida
			printf("Escolha uma das seguintes opções:\n\n");
			printf("1.Comprar Maçã     2.Comprar Pera     3.Comprar Abacaxi\n\n\t         4.Finalizar Compra\n\n");
			scanf("%i", &opcao);
			system("cls");
			if (opcao < 1 || opcao > 4) {
				printf("Opção Inválida!\n\n");
			}
		} while (opcao < 1 && opcao > 4);
		
		switch(opcao) { //Somar no total de frutas compradas
			case 1: //Maçã
				printf("Maçã comprada!\n\n");
				quantMaca ++;		
			break;
			case 2: //Pera
				printf("Pera comprada!\n\n");
				quantPera ++;
			break;
			case 3: //Abacaxi
				printf("Abacaxi comprado!\n\n");
				quantAbacaxi ++;
			break;
		}	
	} while (opcao != 4);
	
	printf("Total maçãs compradas: %i\nTotal peras compradas: %i\nTotal abacaxis comprados: %i", quantMaca, quantPera, quantAbacaxi); //Saída
}
