#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

int dado;
//A linha abaixo inicia o gerador de n�meros aleat�rios
srand(time(NULL));
//Usamos a fun��o rand para gerar n�meros aleat�rios
//%6 gera 6 n�meros aleat�rios ( 0 a 5)
//+1 soma 1 ao resultado "N�o existe a face 0 do dado")
dado=("%d", rand() % 6+1);
printf("Jogo do dado\n, ");
system("pause");
return 0;
}
