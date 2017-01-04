#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero;

int main(int argc, char *argv[]) {
	
	printf("Sistemas\n\n");
	printf("1 - Windows\n");
	printf("2 - Linux\n");
	printf("\nEscolha a opção desejada: \n");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1:
			system("cls");
			printf("Iniciando o Windows...\n");
			break;
			
		case 2:
		     system("cls");
		     printf("Iniciando o Línux...\n");
		     break;
		
		default:
		     printf("Opção inválidade\n");    
	}
	
	system("pause");
	return 0;
}
