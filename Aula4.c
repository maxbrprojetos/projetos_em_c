#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	printf("Digite a sua idade: ");
	//referecer a variavel do tipo int - %d
	//scamf le oque está sendo digitado no teclado
	//e armazena na variável
	scanf("%d", &idade);
	//Mostrar o conteudo da variável -  idade
	printf("Idade: %d", idade);
	//A linha abaixa executa uma estrutura de decisao
	if(idade< 18)
	{
		printf("\nMenor de idade\n");
	}
	if(idade>=18)
	{
		 printf("\nMaior de idade\n");
	}
	system("pause");
	return 0;
}
