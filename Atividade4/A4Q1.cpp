#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	int mes;
	int ano;
	
	do { //entrada dia
		printf("Insira o dia: ");
		scanf("%i", &dia);
		system("cls");
	} while (dia < 1 || dia > 31);
	
	do { //entrada mes
		printf("Insira o mês: ");
		scanf("%i", &mes);
		system("cls");
	} while (mes < 1 && mes > 12);
	
	do { //entrada ano
		printf("Insira o ano: ");
		scanf("%i", &ano);
		system("cls");
	} while (ano < 1);
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11 && dia <= 31) { //checar se o mês tem 31 dias
		printf("A data %i/%i/%i é válida.", dia, mes, ano);
	} else if (mes == 4 || mes == 6 || mes == 8 || mes == 10 || mes == 12 & dia <= 30) { //checar se o mês tem apenas 30 dias
		printf("A data %i/%i/%i é válida.", dia, mes, ano);
	} else if (mes == 2 && dia <= 28) {
		printf("A data %i/%i/%i é válida.", dia, mes, ano);
	} else if (ano % 4 == 0 && mes == 2 && dia == 29) { //checar se o ano é bissexto para o dia 29/2
		printf("A data %i/%i/%i é válida.", dia, mes, ano);
	} else {
		printf("A data %i/%i/%i é inválida.", dia, mes, ano);
	}
}
