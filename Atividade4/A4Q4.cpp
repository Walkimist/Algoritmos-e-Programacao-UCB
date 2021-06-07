#include<stdio.h> //printf e scanf
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int fibonacci[20];
	
	//definindo os 2 primeiros termos
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	
	printf("Os 20 primeiros d�gitos de fibonacci s�o:\n\n%i, %i, ", fibonacci[0], fibonacci[1]);
	for (int i = 2; i < 20; i ++) {
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1]; //o pr�ximo termo � igual a soma dos 2 anteriores
		printf("%i", fibonacci[i]);
		if (i < 19) { //formata��o
			printf(", ");
		}
	}
}
