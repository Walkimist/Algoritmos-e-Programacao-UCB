//Entrada: velocidade e placa
//Sa�da: informa��o se o ve�clo ser� multado
//Processamento: Checar velocidade >80 ou <40

#include<stdio.h> //Biblioteca de printf() e scanf()

int main () {
	//Declarar vari�veis
	int vel;
	char placa[7]; //Declarar string usando um array de caracteres
	
	//Entrada do usu�rio
	printf("Insira a placa do veiculo: ");
	scanf("%s", &placa);
	printf("\nInsira a velocidade do veiculo: ");
	scanf("%i", &vel);
	
	//Checar a velocidade
	if (vel > 80) {
		printf("\nVeiculo de placa %s multado por excesso de velocidade (%i km/h)", placa, vel);//Mostrar ao usu�rio a informa��o
	} else if (vel < 40) {
		printf("\nVeiculo de placa %s multado por falta de velocidade (%i km/h)", placa, vel);//Mostrar ao usu�rio a informa��o
	} else {
		printf("\nVeiculo de placa %s nao sera multado", placa);//Mostrar ao usu�rio a informa��o
	}
	
	return 0; //Finalizar o programa
}
