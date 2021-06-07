#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, quantMoveis[5] = {0};
	
	do {
		do { //pegar pedido
			printf("Insira o número dos produtos:\n\n");
			printf("1.Cadeira    2.Mesa de computador    3.Estante de livros\n\n4.Estante de CD    5.Mesa de impressora    0.Finalizar execução\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao < 0 || opcao > 5);
		
		if (opcao != 0) {
			switch(opcao) { //contar produtos
				case 1:
					quantMoveis[0] ++;
				break;
				case 2:
					quantMoveis[1] ++;
				break;
				case 3:
					quantMoveis[2] ++;
				break;
				case 4:
					quantMoveis[3] ++;
				break;
				case 5:
					quantMoveis[4] ++;
				break;
			}
		}
	} while (opcao != 0);
	
	//saída
	printf("%i Cadeira(s)\n%i Mesa(s) de computador\n%i Estante(s) de livros\n%i Estante(s) de CD\n%i Mesa(s) de impressora", quantMoveis[0], quantMoveis[1], quantMoveis[2], quantMoveis[3], quantMoveis[4]);
}
