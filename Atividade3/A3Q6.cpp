#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<ctype.h> //tolower
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo[10];
	float notaM[10]; //Nota meninos
	float notaF[10]; //Nota meninas
	float mediaM = 0; //Media meninos
	float mediaF = 0; //Media meninas
	int quantM = 0; //Quantidade meninos
	int quantF = 0; //Quantidade meninas
	int i = 0;
	
	for (i = 0; i < 10; i ++) { //Pegar entrada de sexos e notas
		printf("Insira o sexo do(a) aluno(a) %i (M ou F): ", i + 1);
		scanf("%c", &sexo[i]);
		if (tolower(sexo[i]) == 'm') { //Registrar nota de menino ou menina
			printf("Insira a nota do aluno %i: ", i + 1);
			scanf("%f", &notaM[i]);
			quantM ++;
		} else {
			printf("Insira a nota da aluna %i: ", i + 1);
			scanf("%f", &notaF[i]);
			quantF ++;
		}
		getchar();
		system("cls");
	}	
	
	for (i = 0; i < quantM; i ++) { //Registrar a média dos meninos
		mediaM += notaM[i];
	}
	
	for (i = 0; i < quantF; i ++) { //Registrar a média das meninas
		mediaF += notaF[i];
	}
	
	if (quantM == 0) { //Saída
		printf("A média dos meninos é: %.2f\nA média das meninas é: %.2f", mediaM, mediaF/quantF);
	} else if (quantF == 0) {
		printf("A média dos meninos é: %.2f\nA média das meninas é: %.2f", mediaM/quantM, mediaF);
	} else {
		printf("A média dos meninos é: %.2f\nA média das meninas é: %.2f", mediaM/quantM, mediaF/quantF);
	}
}
