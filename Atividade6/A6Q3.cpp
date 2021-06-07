#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<ctype.h> //tolower
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	float altura, maiorAltura = 0, menorAltura = 100, mediaAltura = 0;
	int quantMulheres = 0, quantHomens = 0, i;
	
	for(i = 0; i < 10; i ++) {
		do { //pegar sexo
			printf("Insira o sexo da pessoa %i (m ou f): ", i+1);
			scanf("%c", &sexo);
			system("cls");
		} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');
		getchar();
		
		while (true) { //pegar altura
			printf("Insira a altura da pessoa %i: ", i+1);
			scanf("%f", &altura);
			system("cls");
			if (altura > 0){
				break;
			}
		}
		getchar();
		
		if (altura > maiorAltura) { //pegar a maior altura
			maiorAltura = altura;
		}
		if (altura < menorAltura) { //pegar a menor altura
			menorAltura = altura;
		}
		
		if (tolower(sexo) == 'f') {
			mediaAltura += altura;
			quantMulheres ++;
		} else {
			quantHomens ++;
		}
	}
	mediaAltura /= quantMulheres; //calcular a m�dia de altura das mulheres
	
	//sa�da
	printf("A maior altura �: %.2fm\nA menor altura �: %.2fm\n", maiorAltura, menorAltura);
	printf("\nA m�dia de altura das mulheres � de %.2fm\nO n�mero de homens � de %i", mediaAltura, quantHomens);
}
