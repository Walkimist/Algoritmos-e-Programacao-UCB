#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	float precoIngresso = 15;
	int quantVendido = 120, opcao;
	
	do {
		do { //pegar entrada do usuário e dar saída em tempo real
			printf("=========== Planilha de Vendas ===========\n\n");
			printf("Preço ingresso: %.2f R$\n", precoIngresso);
			printf("Expectativa de ingressos vendidos: %i\n\n", quantVendido);
			printf("==========================================\n\n");
			printf("Ganho total: %.2f R$\n", precoIngresso*quantVendido);
			printf("Lucro: %.2f R$\n", (precoIngresso*quantVendido)-600); //ganho total - despesas
			printf("Despesas: 600 R$\n\n");
			printf("==========================================\n\n");
			
			if (precoIngresso > 3) {
				printf("1.Aumentar o preço    2.Diminuir o preço\n\n");
				printf("          3.Finalizar Sistema\n\n");
			} else {
				printf("1.Aumentar o preço    3.Finalizar Sistema\n\n");
			}
			printf("==========================================\n\n");
			scanf("%i", &opcao);
			system("cls");
		} while (opcao < 1 || opcao > 3);
		
		switch(opcao) { //aumentar ou diminuir preço de acordo com a entrada
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
