#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<string.h> //strlen

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char numero[100];
	int tamanho;
	
	printf("Insira um n�mero para contagem de algarismos: ");
	scanf("%s", &numero); //entrada
	system("cls");
	
	tamanho = strlen(numero); //pegar o tamanho de uma string
	
	printf("O n�mero %s possui %i algarismos", numero, tamanho); //sa�da
}
