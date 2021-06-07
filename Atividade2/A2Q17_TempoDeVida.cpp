#include<stdio.h> //printf e scanf

int main() {
	int anoNascimento;
	int anoAtual;
	int diasVividos;
	char nome[15];
	
	printf("Insira seu primeiro nome: ");
	scanf("%s", &nome); //Entrada do usuario
	printf("\nInsira seu ano de nascimento: ");
	scanf("%i", &anoNascimento); //Entrada do usuario
	printf("\nInsira o ano atual: ");
	scanf("%i", &anoAtual); //Entrada do usuario
	
	diasVividos = (anoAtual - anoNascimento) * 365; //Cálculo idade
	
	printf("\n%s, voce viveu %i dias\n", nome, diasVividos); //Saída
}
