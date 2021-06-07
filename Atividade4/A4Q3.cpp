#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char pais[3][50]; //matriz para coleta de número e nome do país
	
	//vetores para armazenar valor de cada país
	int quantOuro[3];
	int quantPrata[3];
	int quantBronze[3];
	int pontosPais[3];
	
	int i;
	
	for (i = 0; i < 3; i ++) { //entrada dos dados
		printf("Insira o nome do país %i: ", i+1);
		fgets(pais[i], 50, stdin);
		system("cls");
		
		do {
			printf("Insira a quantidade de medalhas de OURO ganhas pelo país %i: ", i+1);
			scanf("%i", &quantOuro[i]);
			system("cls");
		} while (quantOuro[i] < 0);
			
		do {
			printf("Insira a quantidade de medalhas de PRATA ganhas pelo país %i: ", i+1);
			scanf("%i", &quantPrata[i]);
			system("cls");
		} while (quantPrata[i] < 0);
			
		do {
			printf("Insira a quantidade de medalhas de BRONZE ganhas pelo país %i: ", i+1);
			scanf("%i", &quantBronze[i]);
			system("cls");
		} while (quantBronze[i] < 0);
		getchar();
		
		pontosPais[i] = 3*quantOuro[i] + 2*quantPrata[i] + quantBronze[i]; //cálculo de pontuação
	}
	
	//realizar as comparações necessárias para apresentação do pódio
	printf("O pódio com base na pontuação de medalhas é:\n\n");
	if (pontosPais[0] > pontosPais[1] && pontosPais[0] > pontosPais[2]) { //1 > 2 e 1 > 3
		printf("1.");
		puts(pais[0]);
		
		if (pontosPais[1] > pontosPais[2]) { //1 > 2 > 3
			printf("2.");
			puts(pais[1]);
			printf("3.");
			puts(pais[2]);
		} else { //1 > 3 > 2
			printf("2.");
			puts(pais[2]);
			printf("3.");
			puts(pais[1]);
		}
	} else if (pontosPais[1] > pontosPais[0] && pontosPais[1] > pontosPais[2]) { // 2 > 1 e 2 > 3
		printf("1.");
		puts(pais[1]);
		if (pontosPais[0] > pontosPais[2]) { //2 > 3 > 1
			printf("2.");
			puts(pais[0]);
			printf("3.");
			puts(pais[2]);
		} else { //2 > 1 > 3
			printf("2.");
			puts(pais[2]);
			printf("3.");
			puts(pais[0]);
		}
	} else if (pontosPais[2] > pontosPais[0] && pontosPais[2] > pontosPais[1]) { //3 > 2 e 3 > 1
		printf("1.");
		puts(pais[2]);
		if (pontosPais[1] > pontosPais[0]) { //3 > 2 > 1
			printf("2.");
			puts(pais[1]);
			printf("3.");
			puts(pais[0]);
		} else { //3 > 1 > 2
			printf("2.");
			puts(pais[0]);
			printf("3.");
			puts(pais[1]);
		}
	} else { //empate
		printf("Empate entre os 3 países.");
	}
}
