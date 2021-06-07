#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<ctype.h> //tolower

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	do { //pegar sexo do usuário
		printf("Insira a inicial do seu sexo (m ou f): ");
		scanf("%c", &sexo);
		system("cls");
	} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');

	printf("Esse sexo por extenso é: %s", tolower(sexo) == 'm' ? "Masculino" : "Feminino"); //saída com operador ternário
}

