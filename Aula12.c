#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void teste(void);

int main(int argc, char *argv[]) {
	
	printf("Exemplo de função\n\n");
	teste();
	teste();
	printf("Fim...");
	system("pause");
	return 0;
}

void teste(void)
{
	printf("Aluno Max\n");
}
