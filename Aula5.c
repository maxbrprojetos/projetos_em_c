#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1, nota2, media;
	printf("Digite a nota1: ");
	scanf("%f", &nota1);
	printf("Digite a nota2: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("A média é: %.2f\n", media);
	if(media < 6)
	{
		printf("\nAluno Reprovado\n");
	}
	else
	{
		printf("\nAluno Aprovado\n");
	}
	system("pause");
	
	return 0;
}
