#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Array multidimensional (matriz)
	//[] [] equivale a [linhas] [colunas]
	//no exemplo [2] [4]
	//equivale a 2 linhas [0] [1] e 4 colunas [0] [1] [2] [3]
	float notas [2] [4] = {{8,7,9,3},{4,5,8,6}};
	printf("%.1f\n", notas[0] [3]);
	system("pause");
	return 0;
}
