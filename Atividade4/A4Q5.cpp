#include<stdio.h> //printf e scanf

int main() {
	int dado[2]; //armazenar o valor de cada dado
	
	printf("Dado 1       Dado 2\n"); //formatação
	for(int i = 1; i <= 6; i ++) {
		dado[0] = i;
		for (int j = 1; j <= 6; j ++) {
			dado[1] = j;
			if (dado[0] + dado[1] == 7) {
				printf("   %i     +     %i      =    7\n", i, j); //saída (espaçamento para formatação)
			}
		}
	}
}
