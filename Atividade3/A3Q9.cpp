#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<string.h> //strcmp
#include<ctype.h> //tolower

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	char corDosOlhos[9];
	char corDosCabelos[9];
	int quantMulheresDescritas = 0;
	int quantMulheres = 0;
	int idade;
	int maiorIdade = 0;
	int quantHabitantes = 1;
	
	do { //pegar entradas
		do { //pegar o sexo
			printf("Insira o sexo (m ou f): ");
			scanf("%c", &sexo);
			system("cls");
		} while (tolower(sexo) != 'm' && tolower(sexo) != 'f');
		
		do { //pegar a cor dos olhos
			printf("Insira a cor dos olhos (azuis, verdes, castanhos, pretos): ");
			scanf("%s", &corDosOlhos);
			system("cls");
		} while (strcmp(corDosOlhos, "azuis") != 0 && strcmp(corDosOlhos, "verdes") != 0 && strcmp(corDosOlhos, "castanhos") != 0 && strcmp(corDosOlhos, "pretos") != 0);
		
		do { //pegar a cor dos cabelos
			printf("Insira a cor dos cabelos (loiros, castanhos, pretos): ");
			scanf("%s", &corDosCabelos);
			system("cls");
		} while (strcmp(corDosCabelos, "castanhos") != 0 && strcmp(corDosCabelos, "pretos") != 0 && strcmp(corDosCabelos, "loiros") != 0);
		
		do { //pegar a idade
			printf("Insira a idade do(a) habitante (Insira -1 para finalizar a execu��o): ");
			scanf("%i", &idade);
			system("cls");
		} while (idade < -1);
		
		if (maiorIdade < idade) { //armazena a maior idade
			maiorIdade = idade;
		}
		
		if (tolower(sexo) == 'f') { //contar quantas mulheres existem no total
			quantMulheres ++;
		}
		
		if (tolower(sexo) == 'f' && idade > 18 && idade < 35 && strcmp(corDosOlhos, "verdes") == 0 && strcmp(corDosCabelos, "loiros") == 0) { //contar quantas mulheres possuem essas caracter�sticas
			quantMulheresDescritas ++;
		}
		
		if (idade != -1) { //apenas continuar contando habitantes se a idade for diferente de -1
			quantHabitantes++;
		}
	} while (idade != -1);
	
	//dar sa�da
	printf("A maior idade dessa popula��o de %i pessoas � %i anos", quantHabitantes, maiorIdade);
	if (quantMulheres > 0) { //checar se quantMulheres > 0 pois se n�o � poss�vel ocorrer a divis�o por 0
		printf("\n\nA porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos e que tenham olhos\nverdes e cabelos loiros � de %i %", 100*quantMulheresDescritas/quantMulheres); //c�lculo de porcentagem
	} else {
		printf("\n\nA porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos e que tenham olhos\nverdes e cabelos loiros � de 0%");
	}
}
