#include<stdio.h> //Biblioteca de printf e scanf

int main() {
	int horas; //Horas utilizadas
	int horasExtras; //Horas a mais de 20
	float preco; //Preco total a pagar
	
	printf("Quantas horas de internet foram utilizadas?\n\n");
	scanf("%i", &horas); //Pegar entrada
	
	if (horas <= 20) { //Checar preco
		preco = 30;
	} else {
		horasExtras = horas - 20;
		preco = 30 + 30*0.1*horasExtras;
	}
	printf("\nTera de pagar %.2f R$", preco); //Mostrar saida
}
