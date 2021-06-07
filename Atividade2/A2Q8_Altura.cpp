//Entrada: Altura e sexo
//Saída: Peso ideal
//Processamento: Checar o sexo da pessoa e calcular o peso ideal com base na altura

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar variáveis
	double altura;
	char sexo;
	
	//Entrada do usuário
	printf("Insira a altura da pessoa (em metros): ");
	scanf("%lf", &altura);
	printf("Insira o sexo da pessoa (m pra homem e f pra mulher): ");
	scanf("%s", &sexo);
	
	//Checar o sexo e calcular o peso ideal
	if(sexo == 'm'){
		printf("\nO peso ideal para um homem com %.2lfm e de %.2lfkg", altura, 72.5*altura-58);
	} else {
		printf("\nO peso ideal para uma mulher com %.2lfm e de %.2lfkg", altura, 62.1*altura-44.7);
	}
		
	return 0; //Finalizar o programa
}
