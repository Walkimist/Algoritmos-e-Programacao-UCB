#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<ctype.h> //tolower

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	do { //pegar sexo do usu�rio
		printf("Insira a inicial do seu sexo (m ou f): ");
		scanf("%c", &sexo);
		system("cls");
	} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');

	printf("Esse sexo por extenso �: %s", tolower(sexo) == 'm' ? "Masculino" : "Feminino"); //sa�da com operador tern�rio
}

