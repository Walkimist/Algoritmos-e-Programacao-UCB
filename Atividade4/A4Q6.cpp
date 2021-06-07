#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<math.h> //sqrt e ceil

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n[2];
	int i;
	
	do { //pegar dois números
		for (i = 0; i < 2; i++) {
			printf("Insira o %iº número natural: ", i+1);
			scanf("%i", &n[i]);
			system("cls");
		}
		if (n[0] > n[1]) { //só funciona se o primeiro número for maior que o segundo
			printf("Entrada inválida, o primeiro número deve ser menor que o segundo.\n\n");
		} else if (n[0] < 0 || n[1] < 0) { //só funciona se os números forem naturais
			printf("Entrada inválida, ambos números devem ser naturais.\n\n");
		}
	} while (n[0] > n[1] || n[0] < 0 || n[1] < 0);
	
	printf("Os números primos entre %i e %i são:\n\n", n[0], n[1]);
	for (i = n[0]; i <= n[1]; i ++) { //checar números primos
		int j = ceil(sqrt(i)); //fórmula Qm = n/m, onde m é a raiz quadrada de n arredondada ao maior valor inteiro mais próximo
		if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7 || i == 11 || i % j != 0 && i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0) { //tá horroroso mas tá funcionando
			printf("%i", i); //saída
			if (i < n[1] ) {
				printf(", "); //formatação
			}
		}
	}
}
