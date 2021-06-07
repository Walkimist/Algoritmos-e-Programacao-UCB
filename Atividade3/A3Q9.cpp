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
			printf("Insira a idade do(a) habitante (Insira -1 para finalizar a execução): ");
			scanf("%i", &idade);
			system("cls");
		} while (idade < -1);
		
		if (maiorIdade < idade) { //armazena a maior idade
			maiorIdade = idade;
		}
		
		if (tolower(sexo) == 'f') { //contar quantas mulheres existem no total
			quantMulheres ++;
		}
		
		if (tolower(sexo) == 'f' && idade > 18 && idade < 35 && strcmp(corDosOlhos, "verdes") == 0 && strcmp(corDosCabelos, "loiros") == 0) { //contar quantas mulheres possuem essas características
			quantMulheresDescritas ++;
		}
		
		if (idade != -1) { //apenas continuar contando habitantes se a idade for diferente de -1
			quantHabitantes++;
		}
	} while (idade != -1);
	
	//dar saída
	printf("A maior idade dessa população de %i pessoas é %i anos", quantHabitantes, maiorIdade);
	if (quantMulheres > 0) { //checar se quantMulheres > 0 pois se não é possível ocorrer a divisão por 0
		printf("\n\nA porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos e que tenham olhos\nverdes e cabelos loiros é de %i %", 100*quantMulheresDescritas/quantMulheres); //cálculo de porcentagem
	} else {
		printf("\n\nA porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos e que tenham olhos\nverdes e cabelos loiros é de 0%");
	}
}
