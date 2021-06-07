#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")
#include<locale.h> //setlocale
#include<math.h> //sqrt e ceil

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n[2];
	int i;
	
	do { //pegar dois n�meros
		for (i = 0; i < 2; i++) {
			printf("Insira o %i� n�mero natural: ", i+1);
			scanf("%i", &n[i]);
			system("cls");
		}
		if (n[0] > n[1]) { //s� funciona se o primeiro n�mero for maior que o segundo
			printf("Entrada inv�lida, o primeiro n�mero deve ser menor que o segundo.\n\n");
		} else if (n[0] < 0 || n[1] < 0) { //s� funciona se os n�meros forem naturais
			printf("Entrada inv�lida, ambos n�meros devem ser naturais.\n\n");
		}
	} while (n[0] > n[1] || n[0] < 0 || n[1] < 0);
	
	printf("Os n�meros primos entre %i e %i s�o:\n\n", n[0], n[1]);
	for (i = n[0]; i <= n[1]; i ++) { //checar n�meros primos
		int j = ceil(sqrt(i)); //f�rmula Qm = n/m, onde m � a raiz quadrada de n arredondada ao maior valor inteiro mais pr�ximo
		if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7 || i == 11 || i % j != 0 && i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0) { //t� horroroso mas t� funcionando
			printf("%i", i); //sa�da
			if (i < n[1] ) {
				printf(", "); //formata��o
			}
		}
	}
}
