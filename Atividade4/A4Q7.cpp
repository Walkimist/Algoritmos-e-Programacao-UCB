#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<ctype.h> //tolower
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	float altura, maiorAltura = 0, menorAltura = 100, mediaAltura = 0;
	int quantMulheres = 0, i;
	
	for(i = 0; i < 50; i ++) {
		do { //pegar sexo
			printf("Insira o sexo da pessoa %i (m ou f): ", i+1);
			scanf("%c", &sexo);
			system("cls");
		} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');
		
		do { //pegar altura
			printf("Insira a altura da pessoa %i: ", i+1);
			scanf("%f", &altura);
			system("cls");
		} while (altura <= 0);
		
		if (altura > maiorAltura) { //pegar a maior altura
			maiorAltura = altura;
		}
		if (altura < menorAltura) { //pegar a menor altura
			menorAltura = altura;
		}
		
		if (tolower(sexo) == 'f') {
			mediaAltura += altura;
			quantMulheres ++;
		}
	}
	mediaAltura /= quantMulheres; //calcular a média de altura das mulheres
	
	//saída
	printf("A maior altura é: %.2fm\nA menor altura é: %.2fm\n", maiorAltura, menorAltura);
	printf("\nA média de altura das mulheres é de %.2fm", mediaAltura);
}
