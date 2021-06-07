#include<stdio.h> //Biblioteca de printf e scanf

int main() {
	int ddd; //Variavel para o ddd
	
	printf("Insira o DDD desejado: ");
	scanf("%i", &ddd); //Pegar entrada
	
	switch (ddd) { //Apresentar saida
		case 61:
			printf("\nO DDD %i e de Brasilia\n", ddd);
		break;
		case 71:
			printf("\nO DDD %i e de Salvador\n", ddd);
		break;
		case 11:
			printf("\nO DDD %i e de Sao Paulo\n", ddd);
		break;
		case 21:
			printf("\nO DDD %i e de Rio de Janeiro\n", ddd);
		break;
		case 32:
			printf("\nO DDD %i e de Juiz de Fora\n", ddd);
		break;
		case 19:
			printf("\nO DDD %i e de Campinas\n", ddd);
		break;
		case 27:
			printf("\nO DDD %i e de Vitoria\n", ddd);
		break;
		case 31:
			printf("\nO DDD %i e de Belo Horizonte\n", ddd);
		break;
	}
}
