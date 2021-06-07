#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero[3], buffer, i;
	bool organizado = false;
	
	for (i = 0; i < 3; i ++) {
		printf("Insira o número %i: ", i+1);
		scanf("%i", &numero[i]);
		system("cls");
	}
	
	while (organizado == false) {
		for (i = 0; i < 2; i ++) {
			if (numero[i] > numero[i+1]) {
				buffer = numero[i];
				numero[i] = numero[i+1];
				numero[i+1] = buffer;
			}
		}
		if (numero[0] < numero[1] && numero[1] < numero[2]) {
			organizado = true;
		}
	}
	
	printf("A ordem crescente é: %i, %i, %i", numero[0], numero[1], numero[2]);
}

