#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, i;
	float quantVotos[6] = {0}, porcentagem[6], totalVotos = 1;
	
	do {
		do { //pegar o voto
			printf("Insira o número do voto (1 a 4 para candidatos, 5 para nulo, 6 para em branco ou 0 para finalizar): ");
			scanf("%i", &opcao);
			system("cls");
			if (opcao < 0 || opcao > 6) {
				printf("Voto inválido.\n\n");
			}
		} while (opcao < 0 || opcao > 6);
		
		if (opcao != 0) { //contar votos e total
			switch(opcao) {
				case 1:
					quantVotos[0] ++;
				break;
				case 2:
					quantVotos[1] ++;
				break;
				case 3:
					quantVotos[2] ++;
				break;
				case 4:
					quantVotos[3] ++;
				break;
				case 5:
					quantVotos[4] ++;
				break;
				case 6:
					quantVotos[5] ++;
				break;
			}
			totalVotos ++;
		}
	} while (opcao != 0);
	
	for (i = 0; i < 6; i ++) { //cálculo de porcentagem
		porcentagem[i] = (quantVotos[i]/totalVotos)*100;
	}
	
	printf("Dados coletados:\n\n");
	for (i = 0; i < 6; i ++) { //saída
		if (i <= 3) {
			printf("Candidato %i: %.0f votos totais, %.1f%% dos votos\n", i+1, quantVotos[i], porcentagem[i]);
		} else if (i == 4){
			printf("\n%.0f votos nulos, %.1f%% dos votos\n", quantVotos[i], porcentagem[i]);
		} else {
			printf("\n%.0f votos em branco, %.1f%% dos votos\n", quantVotos[i], porcentagem[i]);
		}
	}
}
