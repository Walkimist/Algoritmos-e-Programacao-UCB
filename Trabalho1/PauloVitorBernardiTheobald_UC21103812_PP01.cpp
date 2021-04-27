//Nome Completo: Paulo Vitor Bernardi Theobald - Matrícula: UC21103812 - Curso: Engenharia de Software

#include<stdio.h>//Biblioteca de printf() e scanf()
#include<string.h>//Biblioteca para manipulação de chars e strings
#include<ctype.h>//Biblioteca para o comando tolower()
#include<stdlib.h>//Biblioteca para o system("clr")

int main() { //Função principal
	char filme[100]; //String para armazenar o nome do filme
	int sessoes; //Número de sessões de um dado filme
	int quantidadeDePessoas; //Quantas pessoas assistiram ao filme
	int i = 0; //Variável para iterações de for e while
	int homens = 0; //Número de homens totais
	int mulheres = 0; //Número de mulheres totais
	int criancas = 0; //Número de crianças totais
	int adolescentes = 0; //Número de adolescentes totais
	int adultos = 0; //Número de adultos totais
	int idosos = 0; //Número de adultos totais
	int maiorEHomem = 0; //Número de homens maiores de idade
	int maiorEMulher = 0; //Número de mulheres maiores de idade
	float preco; //Preço do ingresso
	float ganhoTotal; //Ganho total do cinema
	char buffer[3]; //Buffer para armazenamento temporário de uma string para checar se a entrada é um número
	
	printf("---Bem Vindo(a) ao Cinema UCB---\n\n"); //Apresentar Título do programa
	
	while (true) { //Loop para pegar o nome do filme
		printf("Insira o nome do filme: "); //Pedir ao usúario o nome do filme
		fgets(filme, 100, stdin); //Pegar a entrada do usuário
		filme[strcspn(filme, "\n")] = 0; //Remover a quebra de linha após dar puts(filme)
		if (filme[0] == '\0') { //Checar se o nome do filme é vazio
			system("cls"); //Limpar a tela
			printf("Nome nao pode ser vazio.\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
		} else { //Caso a entrada esteja certa
			system("cls"); //Limpar a tela
			break; //Quebrar o loop e prosseguir com o código
		}
	}	
	
	while (true) { //Loop para pegar o preço da entrada
		printf("Insira o preco do ingresso (entre 5.00 e 30.00 R$): "); //Pedir ao usúario o preço do ingresso
		scanf("%s", &buffer); //Pegar a entrada do usuário com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada é um número
			preco = atof(buffer); //Se for, confirmar o preço do ingresso
			if (preco < 5 || preco > 20) { //Checar se o preço está entre 5 e 30 R$
				system("cls"); //Limpar a tela
				printf("Preco invalido, deve ser entre 5.00 e 30.00 R$.\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o código
			}
		} else { //Caso a entrada não seja um número
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
		}
	}

	while (true) { //Loop para pegar o numero de sessoes do filme
		printf("Insira o numero de sessoes do dado filme (obrigatoriamente 2): "); //Pedir ao usúario o número de sessões
		scanf("%s", &buffer); //Pegar a entrada do usuário com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada é um número
			sessoes = atoi(buffer); //Se for, confirmar a quantidade de sessões
			if (sessoes != 2) { //Checar se a entrada de sessões é diferente de 2
				system("cls"); //Limpar a tela
				printf("Numero invalido, tente 2 sessoes\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o código
			}
		} else { //Caso a entrada não seja um número
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
		}
	}

	while (true) { //Loop para pegar o numero de pessoas que assistiram ao filme
		printf("Insira o numero de pessoas que assistiram ao filme (minimo 10): "); //Pedir ao usúario o número de pessoas que assistiram ao filme
		scanf("%s", &buffer); //Pegar a entrada do usuário com um buffer
		if (isdigit(buffer[0])) { //Checar se a entrada é um número
			quantidadeDePessoas = atoi(buffer); //Se for, confirmar a quantidade de pessoas
			if (quantidadeDePessoas < 10) { //Checar se houveram 10 ou mais pessoas na sessão
				system("cls"); //Limpar a tela
				printf("Numero invalido, devem haver mais de 10 pessoas\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
			} else { //Caso a entrada esteja certa
				system("cls"); //Limpar a tela
				break; //Quebrar o loop e prosseguir com o código
			}
		} else { //Caso a entrada não seja um número
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
		}
	}
	
	char sexos[quantidadeDePessoas]; //Array para guardar os sexos das pessoas

	while (i != quantidadeDePessoas) { //Loop para pegar o sexo de cada pessoa da sessão, ao i chegar na quantidade de pessoas o loop para
		printf("Insira o sexo da pessoa %i (m ou f): ", i+1); //Pedir ao usúario o sexo da pessoa em questão
		scanf("%s", &sexos[i]); //Pegar a entrada do usuário
		if (tolower(sexos[i]) == 'm' || tolower(sexos[i]) == 'f') { //Checar se o sexo inserido é válido
			system("cls"); //Limpar a tela
			i ++; //Se for válido aumenta um no índice e roda o código novamente com a próxima pessoa
		} else { //Se não for válido
			system("cls"); //Limpar a tela
			printf("Sexo invalido, utilize somente m ou f\n\n"); //Relatar ao usuário a razão da entrada ser iválida e repetir o código
		}
	}
	
	int idades[quantidadeDePessoas]; //Array para guardar as idades das pessoas
	
	i = 0; //Resetar o i
	while (i != quantidadeDePessoas) { //Loop para pegar a idade de cada pessoa da sessão, ao i chegar na quantidade de pessoas o loop para
		printf("Insira a idade da pessoa %i (de 3 a 100 anos): ", i+1); //Pedir ao usúario a idade da pessoa em questão
		scanf("%s", &buffer); //Pegar a entrada do usuário
		if (isdigit(buffer[0])) { //Checar se a entrada é um número
			idades[i] = atoi(buffer); //Se for, confirmar a idade da pessoa em questão
			if (idades[i] >= 3 && idades[i] <= 100) { //Checar se a idade inserida é válida
				system("cls"); //Limpar a tela
				i ++; //Se for válido aumenta um no índice e roda o código novamente com a próxima pessoa
			} else { //Se não for válido
				system("cls"); //Limpar a tela
				printf("Idade invalida, deve ser entre 3 e 100 anos\n\n"); //Relatar ao usuário a razão da entrada ser iválida e repetir o código
			}
		} else { //Caso a entrada não seja um número
			system("cls"); //Limpar a tela
			printf("Character invalido, utilize somente numeros\n\n"); //Relatar ao usuário a razão da entrada ser inválida e repetir o código
		}
	}	
	
	printf("\nFilme: "); //Mostrar o filme inserido pelo usuário
	puts(filme); //Mostrar o filme inserido pelo usuário
	printf("Numero de sessoes: %i\n", sessoes);
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (tolower(sexos[i]) == 'm') { //Se for homem
			homens ++; //Aumentar em um o número de homens
		} else { //Se for mulher
			mulheres ++; //Aumentar em um o número de mulheres
		}
	}
	
	printf("\n---Quantidade de pessoas por sexo---\n"); //Texto de organização
	printf("\nHomens: %i\nMulheres: %i", homens, mulheres); //Mostrar o número de homens e mulheres
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (idades[i] >= 65) { //Se tiver 65 anos ou mais
			idosos ++; //Aumentar em um o número de idosos
		} else if (idades[i] >= 18) { //Se tiver 18 anos ou mais
			adultos ++; //Aumentar em um o número de adultos
		} else if (idades[i] >= 14) { //Se tiver 14 anos ou mais
			adolescentes ++; //Aumentar em um o número de adolescentes
		} else if (idades[i] >= 3) { //Se tiver 3 anos ou mais
			criancas ++; //Aumentar em um o número de crianças
		}
	}
	
	printf("\n\n---Quantidade de pessoas por faixa etaria---\n");
	printf("\nCriancas: %i\nAdolescentes: %i\nAdultos: %i\nIdosos: %i\n", criancas, adolescentes, adultos, idosos); //Mostrar o número de pessoas em cada faixa etária
	printf("\n-----------------------------------\n");
	
	char enter; //Variável para esperar a entrada
	printf("\nAperte enter para continuar"); //Falar ao usuário como ir para a próxima tela
	enter = fgetc(stdin); //Pegar entrada qualquer
	enter = getchar(); //Pegar entrada qualquer
	system("cls"); //Limpar a tela
	
	for (i = 0; i < quantidadeDePessoas; i++) { //Checar cada pessoa
		if (tolower(sexos[i]) == 'm' && idades[i] >= 18) { //Se for homem maior de idade
			maiorEHomem ++; //Aumentar o número de homens maiores de idade
		} else if (tolower(sexos[i]) == 'f' && idades[i] >= 18) { //Se for mulher maior de idade
			maiorEMulher ++; //Aumentar o número de mulheres maiores de idade
		}
	}
	
	printf("---Informacoes adicionais---\n"); //Texto de organização
	printf("\nHomens maiores de idade: %i\nMulheres maiores de idade: %i\n", maiorEHomem, maiorEMulher); //Mostrar o número de homens e mulheres maiores de idade
	
	ganhoTotal = criancas * preco/2 + adolescentes * preco + adultos * preco + idosos * preco/2; //Calculo do ganho total do cinema
	printf("\nPreco entrada inteira: %.2f R$\nPreco entrada meia: %.2f R$\n\nGanho total do cinema com entradas: %.2f R$\n", preco, preco/2, ganhoTotal); //Mostrar os preços individuais e o ganho total
	
	return 0; //Finalizar o programa
}
