#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese"); //Permitir uso de caracteres em portugês
	
	float altura[10]; //Vetor para armazenar alturas
	int i;
	
	for (i = 0; i < 10; i++) { //Pegar 10 entradas de altura
		printf("Insira a altura da pessoa %i: ", i + 1);
		scanf("%f", &altura[i]);
		system("cls");
	}
	
	float maiorAltura = altura[0]; //Maior altura
	i = 1;
	while(i < 10) { //Pegar a maior altura
		if (maiorAltura < altura[i]) {
			maiorAltura = altura[i];
		}
		i++;
	}
	
	printf("A maior altura é %.2fm", maiorAltura); //Saída
}
