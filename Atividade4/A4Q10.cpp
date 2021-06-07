#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<ctype.h> //tolower

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float quantVinhos[3] = {0, 0, 0}, totalVinhos = 0, porcentagem[3];
	char vinho;

	do {
		do { //pegar o tipo de vinho
			printf("Insira o tipo do vinho %.0f (T para tinto, B para branco e R para rosê): ", totalVinhos + 1);
			scanf("%c", &vinho);
			getchar();
			system("cls");
		} while (tolower(vinho) != 't' && tolower(vinho) != 'b' && tolower(vinho) != 'r' && tolower(vinho) != 'f');
		
		if (tolower(vinho) == 't') { //fazer contagem dos vinhos
			quantVinhos[0] ++;
		} else if (tolower(vinho) == 'b'){
			quantVinhos[1] ++;
		} else if (tolower(vinho) == 'r'){
			quantVinhos[2] ++;
		}
		
		if (tolower(vinho) != 'f') { //contar o total de vinhos
			totalVinhos ++;
		}
	} while (tolower(vinho) != 'f');
	
	for (int i = 0; i < 3; i ++) { //calcular a porcentagem
		porcentagem[i] = (quantVinhos[i]/totalVinhos)*100;
	}
	
	//saída
	printf("Total de vinhos: %.0f\n\n", totalVinhos);
	printf("Desses, %.0f%% são tintos, %.0f%% são brancos e %.0f%% são rosê", porcentagem[0], porcentagem[1], porcentagem[2]);
}
