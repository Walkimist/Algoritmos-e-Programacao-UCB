#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	int mes;
	
	do { //entrada dia
		printf("Insira o dia: ");
		scanf("%i", &dia);
		system("cls");
	} while (dia < 1 || dia > 31);
	
	do { //entrada mes
		printf("Insira o m�s: ");
		scanf("%i", &mes);
		system("cls");
	} while (mes < 1 && mes > 12);
	
	//processamento e sa�da
	if (mes == 3 && dia >= 21 || mes == 4 && dia <= 20) {
		printf("O signo pertencente � essa data � �ries");
	} else if (mes == 4 && dia >= 21 || mes == 5 && dia <= 20) {
		printf("O signo pertencente � essa data � Touro");
	} else if (mes == 5 && dia >= 21 || mes == 6 && dia <= 20) {
		printf("O signo pertencente � essa data � G�meos");
	} else if (mes == 6 && dia >= 21 || mes == 7 && dia <= 22) {
		printf("O signo pertencente � essa data � C�ncer");
	} else if (mes == 7 && dia >= 23 || mes == 8 && dia <= 22) {
		printf("O signo pertencente � essa data � Le�o");
	} else if (mes == 8 && dia >= 23 || mes == 9 && dia <= 22) {
		printf("O signo pertencente � essa data � Virgem");
	} else if (mes == 9 && dia >= 23 || mes == 10 && dia <= 22) {
		printf("O signo pertencente � essa data � Libra");
	} else if (mes == 10 && dia >= 23 || mes == 11 && dia <= 21) {
		printf("O signo pertencente � essa data � Escorpi�o");
	} else if (mes == 11 && dia >= 22 || mes == 12 && dia <= 21) {
		printf("O signo pertencente � essa data � Sagit�rio");
	} else if (mes == 12 && dia >= 22 || mes == 1 && dia <= 20) {
		printf("O signo pertencente � essa data � Capric�rnio");
	} else if (mes == 1 && dia >= 21 || mes == 2 && dia <= 18) {
		printf("O signo pertencente � essa data � Aqu�rio");
	} else if (mes == 2 && dia >= 19 || mes == 3 && dia <= 20) {
		printf("O signo pertencente � essa data � Peixes");
	}
}
