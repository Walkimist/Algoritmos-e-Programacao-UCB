//Nome Completo: Paulo Vitor Bernardi Theobald - Matr�cula: UC21103812 - Curso: Engenharia de Software

#include<stdio.h>//Biblioteca de printf() e scanf()
#include<string.h>//Biblioteca para manipula��o de chars e strings
#include<ctype.h>//Biblioteca para o comando tolower()
#include<stdlib.h>//Biblioteca para o system("clr")

int main() { //Fun��o principal
	char filme[100]; //String para armazenar o nome do filme
	int sessoes; //N�mero de sess�es de um dado filme
	int quantidadeDePessoas; //Quantas pessoas assistiram ao filme
	int i = 0; //Vari�vel para itera��es de for e while
	int homens = 0; //N�mero de homens totais
	int mulheres = 0; //N�mero de mulheres totais
	int criancas = 0; //N�mero de crian�as totais
	int adolescentes = 0; //N�mero de adolescentes totais
	int adultos = 0; //N�mero de adultos totais
	int idosos = 0; //N�mero de adultos totais
	int maiorEHomem = 0; //N�mero de homens maiores de idade
	int maiorEMulher = 0; //N�mero de mulheres maiores de idade
	float preco; //Pre�o do ingresso
	float ganhoTotal; //Ganho total do cinema
	char buffer[3]; //Buffer para armazenamento tempor�rio de uma string para checar se a entrada � um n�mero
	
	printf("---Bem Vindo(a) ao Cinema UCB---\n\n"); //Apresentar T�tulo do programa
	
	while (true) { //Loop para pegar o nome do filme
		printf("Insira o nome do filme: "); //Pedir ao us�ario o nome do filme
		fgets(filme, 100, stdin); //Pegar a entrada do usu�rio
		filme[strcspn(filme, "\n")] = 0; //Remover a quebra de linha ap�s dar puts(filme)
		if (filme[0] == '\0') { //Checar se o nome do filme � vazio
			system("cls"); //Limpar a tela
			printf("Nome nao pode ser vazio.\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
		} else { //Caso a entrada esteja certa
			system("cls"); //Limpar a tela
			break; //Quebrar o loop e prosseguir com o c�digo
		}
	}	
	
	while (true) { //Loop para pegar o pre�o da entrada
		printf("Insira o preco do ingresso (entre 5.00 e 30.00 R$): "); //Pedir ao us�ario o pre�o do ingresso
		scanf("%s", &buffer); //Pegar a entrada do usu�rio com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada � um n�mero
			preco = atof(buffer); //Se for, confirmar o pre�o do ingresso
			if (preco < 5 || preco > 20) { //Checar se o pre�o est� entre 5 e 30 R$
				system("cls"); //Limpar a tela
				printf("Preco invalido, deve ser entre 5.00 e 30.00 R$.\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o c�digo
			}
		} else { //Caso a entrada n�o seja um n�mero
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
		}
	}

	while (true) { //Loop para pegar o numero de sessoes do filme
		printf("Insira o numero de sessoes do dado filme (obrigatoriamente 2): "); //Pedir ao us�ario o n�mero de sess�es
		scanf("%s", &buffer); //Pegar a entrada do usu�rio com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada � um n�mero
			sessoes = atoi(buffer); //Se for, confirmar a quantidade de sess�es
			if (sessoes != 2) { //Checar se a entrada de sess�es � diferente de 2
				system("cls"); //Limpar a tela
				printf("Numero invalido, tente 2 sessoes\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o c�digo
			}
		} else { //Caso a entrada n�o seja um n�mero
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
		}
	}

	while (true) { //Loop para pegar o numero de pessoas que assistiram ao filme
		printf("Insira o numero de pessoas que assistiram ao filme (minimo 10): "); //Pedir ao us�ario o n�mero de pessoas que assistiram ao filme
		scanf("%s", &buffer); //Pegar a entrada do usu�rio com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada � um n�mero
			quantidadeDePessoas = atoi(buffer); //Se for, confirmar a quantidade de pessoas
			if (quantidadeDePessoas < 10) { //Checar se houveram 10 ou mais pessoas na sess�o
				system("cls"); //Limpar a tela
				printf("Numero invalido, devem haver mais de 10 pessoas\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o c�digo
			}
		} else { //Caso a entrada n�o seja um n�mero
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
		}
	}
	
	char sexos[quantidadeDePessoas]; //Array para guardar os sexos das pessoas

	while (i != quantidadeDePessoas) { //Loop para pegar o sexo de cada pessoa da sess�o, ao i chegar na quantidade de pessoas o loop para
		printf("Insira o sexo da pessoa %i (m ou f): ", i+1); //Pedir ao us�ario o sexo da pessoa em quest�o
		scanf("%s", &sexos[i]); //Pegar a entrada do usu�rio
		if (tolower(sexos[i]) == 'm' || tolower(sexos[i]) == 'f') { //Checar se o sexo inserido � v�lido
			system("cls"); //Limpar a tela
			i ++; //Se for v�lido aumenta um no �ndice e roda o c�digo novamente com a pr�xima pessoa
		} else { //Se n�o for v�lido
			system("cls"); //Limpar a tela
			printf("Sexo invalido, utilize somente m ou f\n\n"); //Relatar ao usu�rio a raz�o da entrada ser iv�lida e repetir o c�digo
		}
	}
	
	int idades[quantidadeDePessoas]; //Array para guardar as idades das pessoas
	
	i = 0; //Resetar o i
	while (i != quantidadeDePessoas) { //Loop para pegar a idade de cada pessoa da sess�o, ao i chegar na quantidade de pessoas o loop para
		printf("Insira a idade da pessoa %i (de 3 a 100 anos): ", i+1); //Pedir ao us�ario a idade da pessoa em quest�o
		scanf("%s", &buffer); //Pegar a entrada do usu�rio
		if (isdigit(buffer[0])) { //Checar se a entrada � um n�mero
			idades[i] = atoi(buffer); //Se for, confirmar a idade da pessoa em quest�o
			if (idades[i] >= 3 && idades[i] <= 100) { //Checar se a idade inserida � v�lida
				system("cls"); //Limpar a tela
				i ++; //Se for v�lido aumenta um no �ndice e roda o c�digo novamente com a pr�xima pessoa
			} else { //Se n�o for v�lido
				system("cls"); //Limpar a tela
				printf("Idade invalida, deve ser entre 3 e 100 anos\n\n"); //Relatar ao usu�rio a raz�o da entrada ser iv�lida e repetir o c�digo
			}
		} else { //Caso a entrada n�o seja um n�mero
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usu�rio a raz�o da entrada ser inv�lida e repetir o c�digo
		}
	}	
	
	printf("\nFilme: "); //Mostrar o filme inserido pelo usu�rio
	puts(filme); //Mostrar o filme inserido pelo usu�rio
	printf("Numero de sessoes: %i\n", sessoes);
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (tolower(sexos[i]) == 'm') { //Se for homem
			homens ++; //Aumentar em um o n�mero de homens
		} else { //Se for mulher
			mulheres ++; //Aumentar em um o n�mero de mulheres
		}
	}
	
	printf("\n---Quantidade de pessoas por sexo---\n"); //Texto de organiza��o
	printf("\nHomens: %i\nMulheres: %i", homens, mulheres); //Mostrar o n�mero de homens e mulheres
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (idades[i] >= 65) { //Se tiver 65 anos ou mais
			idosos ++; //Aumentar em um o n�mero de idosos
		} else if (idades[i] >= 18) { //Se tiver 18 anos ou mais
			adultos ++; //Aumentar em um o n�mero de adultos
		} else if (idades[i] >= 14) { //Se tiver 14 anos ou mais
			adolescentes ++; //Aumentar em um o n�mero de adolescentes
		} else if (idades[i] >= 3) { //Se tiver 3 anos ou mais
			criancas ++; //Aumentar em um o n�mero de crian�as
		}
	}
	
	printf("\n\n---Quantidade de pessoas por faixa etaria---\n");
	printf("\nCriancas: %i\nAdolescentes: %i\nAdultos: %i\nIdosos: %i\n", criancas, adolescentes, adultos, idosos); //Mostrar o n�mero de pessoas em cada faixa et�ria
	printf("\n-----------------------------------\n");
	
	char enter; //Vari�vel para esperar a entrada
	printf("\nAperte enter para continuar"); //Falar ao usu�rio como ir para a pr�xima tela
	enter = fgetc(stdin); //Pegar entrada qualquer
	enter = getchar(); //Pegar entrada qualquer
	system("cls"); //Limpar a tela
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (tolower(sexos[i]) == 'm' && idades[i] >= 18) { //Se for homem maior de idade
			maiorEHomem ++; //Aumentar o n�mero de homens maiores de idade
		} else if (tolower(sexos[i]) == 'f' && idades[i] >= 18) { //Se for mulher maior de idade
			maiorEMulher ++; //Aumentar o n�mero de mulheres maiores de idade
		}
	}
	
	printf("---Informacoes adicionais---\n"); //Texto de organiza��o
	printf("\nHomens maiores de idade: %i\nMulheres maiores de idade: %i\n", maiorEHomem, maiorEMulher); //Mostrar o n�mero de homens e mulheres maiores de idade
	
	ganhoTotal = criancas * preco/2 + adolescentes * preco + adultos * preco + idosos * preco/2; //Calculo do ganho total do cinema
	printf("\nPreco entrada inteira: %.2f R$\nPreco entrada meia: %.2f R$\n\nGanho total do cinema com entradas: %.2f R$\n", preco, preco/2, ganhoTotal); //Mostrar os pre�os individuais e o ganho total
	
	return 0; //Finalizar o programa
}
