#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls)
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float H = 0;
	float N;
	
	printf("Insira o valor de N: ");
	scanf("%f", &N); //Entrada
	system("cls");
	
	for (float i = N; i >= 1; i--) { //C�lculo
		H += 1/i;
	}
	
	printf("O resultado � aproximadamente %.2f", H); //Sa�da
}
