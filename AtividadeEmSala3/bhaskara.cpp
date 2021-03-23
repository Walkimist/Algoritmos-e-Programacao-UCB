//Entrada:  a, b, c
//Saída: x' e x''
//Processamento: Cálculo

#include<stdio.h>//Biblioteca de printf e scanf
#include<math.h>//Biblioteca de matemática

int main() {
	double a, b, c, x1, x2, delta; //Declarando as variáveis
	
	//Coletando dados de entrada
	printf("Digite o valor de a: ");
	scanf("%lf", &a);
	printf("Digite o valor de b: ");
	scanf("%lf", &b);
	printf("Digite o valor de c: ");
	scanf("%lf", &c);
	
	delta = pow(b, 2) - 4*a*c; //Cálculo do delta
	
	if (a == 0 || delta < 0) { //Checar se o cálculo de Bhaskara é possível
		printf("\nImpossivel calcular!\n");
		return 0; //Finalizar o programa
	}
	
	//Cálculo do x1 e x2
	x1 = (-(b) + sqrt(delta)) / (2*a);
	x2 = (-(b) - sqrt(delta)) / (2*a);
	
	printf("X1 = %.1lf\tX2 = %.1lf\n", x1, x2); //Mostrar a saída
	return 0; //Finalizar o programa
}
