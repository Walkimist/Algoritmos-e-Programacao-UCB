#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float porcentagem;
	
	do { //pegar a porcentagem
		printf("Insira uma porcentagem para o c�lculo: ");
		scanf("%f", &porcentagem);
		system("cls");
	} while (porcentagem < 0);
	
	printf("%.0f%% de 555 � %.2f", porcentagem, 555*(porcentagem/100)); //c�lculo e sa�da
}
