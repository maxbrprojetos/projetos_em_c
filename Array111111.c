#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//exemplo de notas sem uso de array
	float nota1=9;
	float nota2=8;
	float nota3=7;
	float nota4=6;
	//Exibindo o conteúdo da variável  nota3
	printf("Sem Array\n");
	printf("%.1f\n", nota3);
	//Exemplo de notas com uso de array
	//A linha abaixo cria uma array de 4 posições [0] [1] [2] [3] [4]
	float notas[4]={9,8,7,6};
	//Exibindo o conteúdo da posição [2] do array
	printf("Com Array\n");
	printf("%.1f\n", notas[2]);
	system("pause");
	return 0;
}
