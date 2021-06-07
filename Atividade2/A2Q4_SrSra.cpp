//Entrada: Nome e sexo
//Sa�da: Ilmo(a) Sr(Sra). Nome  
//Processamento: Checar o sexo da pessoa e atribuir Sr. ou Sra.

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar vari�veis
	char nome[32];
	char sexo;
	
	//Entrada do usu�rio
	printf("Insira o nome da pessoa: ");
	fgets(nome, 32, stdin); //L�r toda a linha de nome inserida pelo usu�rio
	printf("Insira o sexo da pessoa (m pra homem e f pra mulher): ");
	scanf("%s", &sexo);
	
	//Checar o sexo
	if(sexo == 'm' or sexo == 'M'){
		printf("\nIlmo Sr. ");
	} else {
		printf("\nIlma Sra. ");
	}
	puts(nome); //Escrever o nome anteriormente inserido
	
	return 0; //Finalizar o programa
}
