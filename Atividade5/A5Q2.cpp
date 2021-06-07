#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, maiorNumero = -999999999;
	
	for (int i = 0; i < 3; i ++) {
		//pegar entrada
		printf("Insira o número %i: ", i+1);
		scanf("%i", &numero);
		system("cls");
		
		if (numero > maiorNumero) { //pegar o maior número
			maiorNumero = numero;
		}
	}
	
	printf("O maior número providenciado é %i", maiorNumero); //saída
}
