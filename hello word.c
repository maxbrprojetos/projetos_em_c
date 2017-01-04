//As linha abauxam chamam as bibiliotecas
//Define a entrada e saida
#include <stdio.h>
//Funções básicas do sistema
#include <stdlib.h>
//Bibliotea de idiomas para acentuação
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Comentario em linha
//argc - refere-se ao números de linhas que vai ter o seu codigo
//argv - refere-se ao conteúdos das linhas
//char - aceita qualquer coisa( caracter, letra, número, etc...
//É uma linguagem case sensitive
//O return zero significa que retornou sem nenhum erro.
//está relacionado com o main
int main(int argc, char *argv[]) {
	//A linha acbaixo configura o odioma para portugues
	//O "C" diferencia maiusculo de minusculo
	setlocale(LC_ALL,"Portuguese");
	//A linha abaixo muda a cor do texto
	//O número 1 refere-se ao  blackgroud e a segunda opçã a letras
	system("color 1F");
	printf("Olá Mundo Hello Word! \n");
	system("pause");
	//A linha abaixa limpa a tela
	system("cls");
	system("color F0");
	printf("Max\n");
	system("pause");
	return 0;
}
