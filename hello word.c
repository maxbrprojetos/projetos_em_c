//As linha abauxam chamam as bibiliotecas
//Define a entrada e saida
#include <stdio.h>
//Fun��es b�sicas do sistema
#include <stdlib.h>
//Bibliotea de idiomas para acentua��o
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Comentario em linha
//argc - refere-se ao n�meros de linhas que vai ter o seu codigo
//argv - refere-se ao conte�dos das linhas
//char - aceita qualquer coisa( caracter, letra, n�mero, etc...
//� uma linguagem case sensitive
//O return zero significa que retornou sem nenhum erro.
//est� relacionado com o main
int main(int argc, char *argv[]) {
	//A linha acbaixo configura o odioma para portugues
	//O "C" diferencia maiusculo de minusculo
	setlocale(LC_ALL,"Portuguese");
	//A linha abaixo muda a cor do texto
	//O n�mero 1 refere-se ao  blackgroud e a segunda op�� a letras
	system("color 1F");
	printf("Ol� Mundo Hello Word! \n");
	system("pause");
	//A linha abaixa limpa a tela
	system("cls");
	system("color F0");
	printf("Max\n");
	system("pause");
	return 0;
}
