#include<stdio.h> //printf e scanf
#include<stdlib.h> //srand e rand
#include<locale.h> //setlocale
#include<time.h> //time(NULL);


int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL)); //função para poder randomizar um valor
	
	int numero[2];
	
	numero[0] = rand() % 21; //pegar um número aleatório entre 0 e 20
	printf("Adivinhe o número entre 0 e 20 que imaginei.\n\n");
	
	do {
		scanf("%i", &numero[1]); //pegar número adivinhado
		printf("\n");
		
		if (numero[0] > numero[1]) { //checar se o chute foi mais alto ou mais baixo ou acertou
			printf("Chutou baixo!\n\n");
		} else if (numero[0] < numero[1]){
			printf("Chutou alto!\n\n");
		} else {
			printf("Acertou!");
		}
	} while (numero[1] != numero[0]);
}
