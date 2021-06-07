#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	float precoIngresso = 15;
	int quantVendido = 120, opcao;
	
	do {
		do { //pegar entrada do usu�rio e dar sa�da em tempo real
			printf("=========== Planilha de Vendas ===========\n\n");
			printf("Pre�o ingresso: %.2f R$\n", precoIngresso);
			printf("Expectativa de ingressos vendidos: %i\n\n", quantVendido);
			printf("==========================================\n\n");
			printf("Ganho total: %.2f R$\n", precoIngresso*quantVendido);
			printf("Lucro: %.2f R$\n", (precoIngresso*quantVendido)-600); //ganho total - despesas
			printf("Despesas: 600 R$\n\n");
			printf("==========================================\n\n");
			
			if (precoIngresso > 3) {
				printf("1.Aumentar o pre�o    2.Diminuir o pre�o\n\n");
				printf("          3.Finalizar Sistema\n\n");
			} else {
				printf("1.Aumentar o pre�o    3.Finalizar Sistema\n\n");
			}
			printf("==========================================\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao < 1 || opcao > 3);
		
		switch(opcao) { //aumentar ou diminuir pre�o de acordo com a entrada
			case 1:
				precoIngresso += 3;
				quantVendido -= 26;
			break;
			case 2:
				if (precoIngresso > 3) {
					precoIngresso -= 3;
					quantVendido += 26;
				}
			break;
		}
	} while (opcao != 3);
}
