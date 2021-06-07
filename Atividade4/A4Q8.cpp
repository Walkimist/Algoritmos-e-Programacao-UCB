#include<stdio.h> //printf e scanf
#include<locale.h> //setlocale

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float altura[2] = {1.5, 1.1};
	float crescimento[2] = {0.02, 0.03};
	int anos = 0;
	
	do { //aumentar a altura
		altura[0] += crescimento[0];
		altura[1] += crescimento[1];
		anos ++;
	} while (altura[1] < altura[0]);
	
	printf("Em %i anos Felisberto será maior que Anacleto", anos); //saída
}
