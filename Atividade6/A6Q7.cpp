#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, quantVotos[4] = {0};
	
	do {
		printf("Insira o número do voto (25 - Pelé, 33 - Maradona, 0 - em branco, qualquer outro número é nulo, -1 finaliza): ");
		scanf("%i", &opcao);
		system("cls");
		
		if (opcao != -1) {
			switch(opcao) {
				case 25: //pelé
					quantVotos[0] ++; 
				break;
				case 33: //maradona
					quantVotos[1] ++; 
				break;
				case 0: //branco
					quantVotos[2] ++; 
				break;
				default: //nulo
					quantVotos[3] ++; 
				break;
			}	
		}
	} while (opcao != -1);
	
	//saída
	if (quantVotos[0] == quantVotos[1]) { //caso empate
		printf("Empate ente Pelé e Maradona\n");
	} else {
		printf("Pelé: %i\n", quantVotos[0]); 
		printf("Maradona: %i\n", quantVotos[1]);
	}
	printf("\nVotos em branco: %i\n", quantVotos[2]);
	printf("Votos nulos: %i", quantVotos[3]);
	
}
