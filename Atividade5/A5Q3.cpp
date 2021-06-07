#include<stdio.h> //printf e scanf
#include<stdlib.h> //system("cls")

int main() {
	char caractere;
	
	printf("Insira um caractere qualquer: ");
	scanf("%c", &caractere); //pegar caractere
	system("cls");
	
	printf("Caractere: %c\nDecimal: %i\nOctal: %o\nHexadecimal: %x", caractere, caractere, caractere, caractere); //%c - caractere | %i - decimal | %o - octal | %x - hexadecimal
}
