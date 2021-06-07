#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Insira qualquer número: ");
	scanf("%i", &numero); //entrada de número
	system("cls");
	
	if (numero < 2000) {
		do { //apresentar os números pares entre a entrada e 2000
			if (numero % 2 == 0) {
				printf("%i", numero);
				if (numero < 2000) {
					printf(" ");
				}
			}
			numero ++;
		} while (numero <= 2000);
	} else {
		printf("%i, Limite de cálculo excedido"); //saída
	}
}
