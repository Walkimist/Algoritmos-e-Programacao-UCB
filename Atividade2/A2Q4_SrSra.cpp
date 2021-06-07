//Entrada: Nome e sexo
//Saída: Ilmo(a) Sr(Sra). Nome  
//Processamento: Checar o sexo da pessoa e atribuir Sr. ou Sra.

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar variáveis
	char nome[32];
	char sexo;
	
	//Entrada do usuário
	printf("Insira o nome da pessoa: ");
	fgets(nome, 32, stdin); //Lêr toda a linha de nome inserida pelo usuário
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
