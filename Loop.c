#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero;
int contador=0;

int main(int argc, char *argv[]) {
	
	system("cls");
	printf("Tabuada\n\n");
	printf("Digite o número da tabuada: ");
	scanf("%d", &numero);
	//A linha abaixo gera um laço finito
	for(contador=0; contador <=10;contador++)
	{
		printf("%d x %d = %d\n", numero, contador, contador*numero);
	}
     system("pause");
	return 0;
}
