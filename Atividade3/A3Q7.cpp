#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	int opcao; //Op��o escolhida pelo usu�rio
	int quantMaca = 0;
	int quantPera = 0;
	int quantAbacaxi = 0;
	
	do { //Pegar entrada at� o usu�rio decidir parar
		do { //Pegar entrada v�lida
			printf("Escolha uma das seguintes op��es:\n\n");
			printf("1.Comprar Ma��     2.Comprar Pera     3.Comprar Abacaxi\n\n\t         4.Finalizar Compra\n\n");
			scanf("%i", &opcao);
			system("cls");
			if (opcao < 1 || opcao > 4) {
				printf("Op��o Inv�lida!\n\n");
			}
		} while (opcao < 1 && opcao > 4);
		
		switch(opcao) { //Somar no total de frutas compradas
			case 1: //Ma��
				printf("Ma�� comprada!\n\n");
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
	
	printf("Total ma��s compradas: %i\nTotal peras compradas: %i\nTotal abacaxis comprados: %i", quantMaca, quantPera, quantAbacaxi); //Sa�da
}
